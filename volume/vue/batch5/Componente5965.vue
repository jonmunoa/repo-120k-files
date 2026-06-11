<template>
  <section class="panel-5965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5965");
const base = ref(5965);
const total = computed(() => base.value * 2);

function incrementar5965() {
  base.value++;
}
</script>
