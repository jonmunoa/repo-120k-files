<template>
  <section class="panel-36229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36229");
const base = ref(36229);
const total = computed(() => base.value * 2);

function incrementar36229() {
  base.value++;
}
</script>
