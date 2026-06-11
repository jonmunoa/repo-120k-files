<template>
  <section class="panel-34693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34693");
const base = ref(34693);
const total = computed(() => base.value * 2);

function incrementar34693() {
  base.value++;
}
</script>
