<template>
  <section class="panel-42121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42121");
const base = ref(42121);
const total = computed(() => base.value * 2);

function incrementar42121() {
  base.value++;
}
</script>
