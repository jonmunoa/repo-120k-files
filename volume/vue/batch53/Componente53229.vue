<template>
  <section class="panel-53229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53229");
const base = ref(53229);
const total = computed(() => base.value * 2);

function incrementar53229() {
  base.value++;
}
</script>
