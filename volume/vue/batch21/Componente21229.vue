<template>
  <section class="panel-21229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21229");
const base = ref(21229);
const total = computed(() => base.value * 2);

function incrementar21229() {
  base.value++;
}
</script>
