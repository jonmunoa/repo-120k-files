<template>
  <section class="panel-1229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1229");
const base = ref(1229);
const total = computed(() => base.value * 2);

function incrementar1229() {
  base.value++;
}
</script>
