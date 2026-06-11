<template>
  <section class="panel-45073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45073");
const base = ref(45073);
const total = computed(() => base.value * 2);

function incrementar45073() {
  base.value++;
}
</script>
