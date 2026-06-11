<template>
  <section class="panel-15217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15217");
const base = ref(15217);
const total = computed(() => base.value * 2);

function incrementar15217() {
  base.value++;
}
</script>
