<template>
  <section class="panel-56209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56209");
const base = ref(56209);
const total = computed(() => base.value * 2);

function incrementar56209() {
  base.value++;
}
</script>
