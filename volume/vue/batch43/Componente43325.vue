<template>
  <section class="panel-43325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43325");
const base = ref(43325);
const total = computed(() => base.value * 2);

function incrementar43325() {
  base.value++;
}
</script>
