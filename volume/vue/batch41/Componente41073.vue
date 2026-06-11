<template>
  <section class="panel-41073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41073");
const base = ref(41073);
const total = computed(() => base.value * 2);

function incrementar41073() {
  base.value++;
}
</script>
