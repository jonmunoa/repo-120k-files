<template>
  <section class="panel-4993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4993");
const base = ref(4993);
const total = computed(() => base.value * 2);

function incrementar4993() {
  base.value++;
}
</script>
