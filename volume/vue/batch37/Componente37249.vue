<template>
  <section class="panel-37249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37249");
const base = ref(37249);
const total = computed(() => base.value * 2);

function incrementar37249() {
  base.value++;
}
</script>
