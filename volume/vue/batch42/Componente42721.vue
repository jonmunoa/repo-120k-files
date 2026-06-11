<template>
  <section class="panel-42721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42721");
const base = ref(42721);
const total = computed(() => base.value * 2);

function incrementar42721() {
  base.value++;
}
</script>
