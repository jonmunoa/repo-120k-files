<template>
  <section class="panel-25517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25517");
const base = ref(25517);
const total = computed(() => base.value * 2);

function incrementar25517() {
  base.value++;
}
</script>
