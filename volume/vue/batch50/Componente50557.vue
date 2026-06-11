<template>
  <section class="panel-50557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50557");
const base = ref(50557);
const total = computed(() => base.value * 2);

function incrementar50557() {
  base.value++;
}
</script>
