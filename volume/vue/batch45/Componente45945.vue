<template>
  <section class="panel-45945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45945");
const base = ref(45945);
const total = computed(() => base.value * 2);

function incrementar45945() {
  base.value++;
}
</script>
