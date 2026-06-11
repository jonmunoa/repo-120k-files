<template>
  <section class="panel-5541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5541");
const base = ref(5541);
const total = computed(() => base.value * 2);

function incrementar5541() {
  base.value++;
}
</script>
