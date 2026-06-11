<template>
  <section class="panel-12229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12229");
const base = ref(12229);
const total = computed(() => base.value * 2);

function incrementar12229() {
  base.value++;
}
</script>
