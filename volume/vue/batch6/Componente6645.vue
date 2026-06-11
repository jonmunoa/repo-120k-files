<template>
  <section class="panel-6645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6645");
const base = ref(6645);
const total = computed(() => base.value * 2);

function incrementar6645() {
  base.value++;
}
</script>
