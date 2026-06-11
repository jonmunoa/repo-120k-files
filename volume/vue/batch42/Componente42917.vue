<template>
  <section class="panel-42917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42917");
const base = ref(42917);
const total = computed(() => base.value * 2);

function incrementar42917() {
  base.value++;
}
</script>
