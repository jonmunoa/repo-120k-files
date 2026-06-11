<template>
  <section class="panel-51573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51573");
const base = ref(51573);
const total = computed(() => base.value * 2);

function incrementar51573() {
  base.value++;
}
</script>
