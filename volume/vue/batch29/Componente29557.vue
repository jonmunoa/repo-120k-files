<template>
  <section class="panel-29557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29557");
const base = ref(29557);
const total = computed(() => base.value * 2);

function incrementar29557() {
  base.value++;
}
</script>
