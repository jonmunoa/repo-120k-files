<template>
  <section class="panel-49301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49301");
const base = ref(49301);
const total = computed(() => base.value * 2);

function incrementar49301() {
  base.value++;
}
</script>
