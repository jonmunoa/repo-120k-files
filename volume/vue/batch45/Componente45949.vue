<template>
  <section class="panel-45949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45949");
const base = ref(45949);
const total = computed(() => base.value * 2);

function incrementar45949() {
  base.value++;
}
</script>
