<template>
  <section class="panel-30905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30905");
const base = ref(30905);
const total = computed(() => base.value * 2);

function incrementar30905() {
  base.value++;
}
</script>
