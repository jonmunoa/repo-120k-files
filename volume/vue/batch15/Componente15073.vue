<template>
  <section class="panel-15073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15073");
const base = ref(15073);
const total = computed(() => base.value * 2);

function incrementar15073() {
  base.value++;
}
</script>
