<template>
  <section class="panel-5441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5441");
const base = ref(5441);
const total = computed(() => base.value * 2);

function incrementar5441() {
  base.value++;
}
</script>
