<template>
  <section class="panel-41557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41557");
const base = ref(41557);
const total = computed(() => base.value * 2);

function incrementar41557() {
  base.value++;
}
</script>
