<template>
  <section class="panel-23921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23921");
const base = ref(23921);
const total = computed(() => base.value * 2);

function incrementar23921() {
  base.value++;
}
</script>
