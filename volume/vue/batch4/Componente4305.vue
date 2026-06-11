<template>
  <section class="panel-4305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4305");
const base = ref(4305);
const total = computed(() => base.value * 2);

function incrementar4305() {
  base.value++;
}
</script>
