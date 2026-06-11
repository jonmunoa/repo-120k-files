<template>
  <section class="panel-42713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42713");
const base = ref(42713);
const total = computed(() => base.value * 2);

function incrementar42713() {
  base.value++;
}
</script>
