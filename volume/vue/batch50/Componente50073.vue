<template>
  <section class="panel-50073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50073");
const base = ref(50073);
const total = computed(() => base.value * 2);

function incrementar50073() {
  base.value++;
}
</script>
