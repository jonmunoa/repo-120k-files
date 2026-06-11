<template>
  <section class="panel-15301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15301");
const base = ref(15301);
const total = computed(() => base.value * 2);

function incrementar15301() {
  base.value++;
}
</script>
