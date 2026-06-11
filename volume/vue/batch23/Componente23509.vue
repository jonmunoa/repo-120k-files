<template>
  <section class="panel-23509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23509");
const base = ref(23509);
const total = computed(() => base.value * 2);

function incrementar23509() {
  base.value++;
}
</script>
