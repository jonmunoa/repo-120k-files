<template>
  <section class="panel-42557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42557");
const base = ref(42557);
const total = computed(() => base.value * 2);

function incrementar42557() {
  base.value++;
}
</script>
