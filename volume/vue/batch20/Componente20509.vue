<template>
  <section class="panel-20509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20509");
const base = ref(20509);
const total = computed(() => base.value * 2);

function incrementar20509() {
  base.value++;
}
</script>
