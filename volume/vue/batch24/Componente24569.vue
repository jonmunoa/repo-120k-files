<template>
  <section class="panel-24569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24569");
const base = ref(24569);
const total = computed(() => base.value * 2);

function incrementar24569() {
  base.value++;
}
</script>
