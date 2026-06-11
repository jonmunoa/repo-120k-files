<template>
  <section class="panel-42377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42377");
const base = ref(42377);
const total = computed(() => base.value * 2);

function incrementar42377() {
  base.value++;
}
</script>
