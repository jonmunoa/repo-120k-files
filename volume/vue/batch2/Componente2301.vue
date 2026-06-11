<template>
  <section class="panel-2301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2301");
const base = ref(2301);
const total = computed(() => base.value * 2);

function incrementar2301() {
  base.value++;
}
</script>
