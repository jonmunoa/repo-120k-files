<template>
  <section class="panel-42225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42225");
const base = ref(42225);
const total = computed(() => base.value * 2);

function incrementar42225() {
  base.value++;
}
</script>
