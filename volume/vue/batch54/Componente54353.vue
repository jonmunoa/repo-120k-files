<template>
  <section class="panel-54353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54353");
const base = ref(54353);
const total = computed(() => base.value * 2);

function incrementar54353() {
  base.value++;
}
</script>
