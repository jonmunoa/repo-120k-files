<template>
  <section class="panel-56557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56557");
const base = ref(56557);
const total = computed(() => base.value * 2);

function incrementar56557() {
  base.value++;
}
</script>
