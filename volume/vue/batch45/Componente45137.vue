<template>
  <section class="panel-45137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45137");
const base = ref(45137);
const total = computed(() => base.value * 2);

function incrementar45137() {
  base.value++;
}
</script>
