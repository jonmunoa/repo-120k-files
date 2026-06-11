<template>
  <section class="panel-55517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55517");
const base = ref(55517);
const total = computed(() => base.value * 2);

function incrementar55517() {
  base.value++;
}
</script>
