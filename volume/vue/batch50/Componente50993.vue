<template>
  <section class="panel-50993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50993");
const base = ref(50993);
const total = computed(() => base.value * 2);

function incrementar50993() {
  base.value++;
}
</script>
