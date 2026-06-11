<template>
  <section class="panel-2701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2701");
const base = ref(2701);
const total = computed(() => base.value * 2);

function incrementar2701() {
  base.value++;
}
</script>
