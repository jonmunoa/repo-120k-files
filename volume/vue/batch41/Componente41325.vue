<template>
  <section class="panel-41325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41325");
const base = ref(41325);
const total = computed(() => base.value * 2);

function incrementar41325() {
  base.value++;
}
</script>
