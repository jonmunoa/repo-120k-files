<template>
  <section class="panel-43281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43281");
const base = ref(43281);
const total = computed(() => base.value * 2);

function incrementar43281() {
  base.value++;
}
</script>
