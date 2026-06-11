<template>
  <section class="panel-15685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15685");
const base = ref(15685);
const total = computed(() => base.value * 2);

function incrementar15685() {
  base.value++;
}
</script>
