<template>
  <section class="panel-17301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17301");
const base = ref(17301);
const total = computed(() => base.value * 2);

function incrementar17301() {
  base.value++;
}
</script>
