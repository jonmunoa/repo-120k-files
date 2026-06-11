<template>
  <section class="panel-47301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47301");
const base = ref(47301);
const total = computed(() => base.value * 2);

function incrementar47301() {
  base.value++;
}
</script>
