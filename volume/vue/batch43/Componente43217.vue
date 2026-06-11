<template>
  <section class="panel-43217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43217");
const base = ref(43217);
const total = computed(() => base.value * 2);

function incrementar43217() {
  base.value++;
}
</script>
