<template>
  <section class="panel-2541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2541");
const base = ref(2541);
const total = computed(() => base.value * 2);

function incrementar2541() {
  base.value++;
}
</script>
