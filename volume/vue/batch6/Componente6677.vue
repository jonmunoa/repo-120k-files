<template>
  <section class="panel-6677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6677");
const base = ref(6677);
const total = computed(() => base.value * 2);

function incrementar6677() {
  base.value++;
}
</script>
