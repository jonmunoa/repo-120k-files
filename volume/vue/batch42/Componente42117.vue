<template>
  <section class="panel-42117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42117");
const base = ref(42117);
const total = computed(() => base.value * 2);

function incrementar42117() {
  base.value++;
}
</script>
