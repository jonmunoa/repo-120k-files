<template>
  <section class="panel-3905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3905");
const base = ref(3905);
const total = computed(() => base.value * 2);

function incrementar3905() {
  base.value++;
}
</script>
