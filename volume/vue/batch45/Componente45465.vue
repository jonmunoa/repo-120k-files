<template>
  <section class="panel-45465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45465");
const base = ref(45465);
const total = computed(() => base.value * 2);

function incrementar45465() {
  base.value++;
}
</script>
