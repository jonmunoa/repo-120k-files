<template>
  <section class="panel-42933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42933");
const base = ref(42933);
const total = computed(() => base.value * 2);

function incrementar42933() {
  base.value++;
}
</script>
