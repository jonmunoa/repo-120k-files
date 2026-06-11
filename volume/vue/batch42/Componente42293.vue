<template>
  <section class="panel-42293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42293");
const base = ref(42293);
const total = computed(() => base.value * 2);

function incrementar42293() {
  base.value++;
}
</script>
