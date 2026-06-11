<template>
  <section class="panel-10509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10509");
const base = ref(10509);
const total = computed(() => base.value * 2);

function incrementar10509() {
  base.value++;
}
</script>
