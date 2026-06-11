<template>
  <section class="panel-23325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23325");
const base = ref(23325);
const total = computed(() => base.value * 2);

function incrementar23325() {
  base.value++;
}
</script>
