<template>
  <section class="panel-5557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5557");
const base = ref(5557);
const total = computed(() => base.value * 2);

function incrementar5557() {
  base.value++;
}
</script>
