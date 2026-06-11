<template>
  <section class="panel-37209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37209");
const base = ref(37209);
const total = computed(() => base.value * 2);

function incrementar37209() {
  base.value++;
}
</script>
