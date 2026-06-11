<template>
  <section class="panel-54513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54513");
const base = ref(54513);
const total = computed(() => base.value * 2);

function incrementar54513() {
  base.value++;
}
</script>
