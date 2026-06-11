<template>
  <section class="panel-15921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15921");
const base = ref(15921);
const total = computed(() => base.value * 2);

function incrementar15921() {
  base.value++;
}
</script>
