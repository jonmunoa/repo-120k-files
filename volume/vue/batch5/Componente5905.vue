<template>
  <section class="panel-5905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5905");
const base = ref(5905);
const total = computed(() => base.value * 2);

function incrementar5905() {
  base.value++;
}
</script>
