<template>
  <section class="panel-30705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30705");
const base = ref(30705);
const total = computed(() => base.value * 2);

function incrementar30705() {
  base.value++;
}
</script>
