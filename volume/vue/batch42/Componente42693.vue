<template>
  <section class="panel-42693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42693");
const base = ref(42693);
const total = computed(() => base.value * 2);

function incrementar42693() {
  base.value++;
}
</script>
