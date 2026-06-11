<template>
  <section class="panel-42509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42509");
const base = ref(42509);
const total = computed(() => base.value * 2);

function incrementar42509() {
  base.value++;
}
</script>
