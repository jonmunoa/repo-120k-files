<template>
  <section class="panel-27545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27545");
const base = ref(27545);
const total = computed(() => base.value * 2);

function incrementar27545() {
  base.value++;
}
</script>
