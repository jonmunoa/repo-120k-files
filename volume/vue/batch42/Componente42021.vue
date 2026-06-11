<template>
  <section class="panel-42021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42021");
const base = ref(42021);
const total = computed(() => base.value * 2);

function incrementar42021() {
  base.value++;
}
</script>
