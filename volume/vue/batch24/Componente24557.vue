<template>
  <section class="panel-24557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24557");
const base = ref(24557);
const total = computed(() => base.value * 2);

function incrementar24557() {
  base.value++;
}
</script>
