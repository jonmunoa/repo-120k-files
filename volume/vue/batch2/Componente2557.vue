<template>
  <section class="panel-2557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2557");
const base = ref(2557);
const total = computed(() => base.value * 2);

function incrementar2557() {
  base.value++;
}
</script>
