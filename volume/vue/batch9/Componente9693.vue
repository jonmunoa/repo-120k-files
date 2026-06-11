<template>
  <section class="panel-9693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9693");
const base = ref(9693);
const total = computed(() => base.value * 2);

function incrementar9693() {
  base.value++;
}
</script>
