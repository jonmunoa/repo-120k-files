<template>
  <section class="panel-25257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25257");
const base = ref(25257);
const total = computed(() => base.value * 2);

function incrementar25257() {
  base.value++;
}
</script>
