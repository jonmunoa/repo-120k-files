<template>
  <section class="panel-42521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42521");
const base = ref(42521);
const total = computed(() => base.value * 2);

function incrementar42521() {
  base.value++;
}
</script>
