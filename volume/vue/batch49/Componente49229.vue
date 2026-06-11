<template>
  <section class="panel-49229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49229");
const base = ref(49229);
const total = computed(() => base.value * 2);

function incrementar49229() {
  base.value++;
}
</script>
