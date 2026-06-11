<template>
  <section class="panel-5569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5569");
const base = ref(5569);
const total = computed(() => base.value * 2);

function incrementar5569() {
  base.value++;
}
</script>
