<template>
  <section class="panel-10657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10657");
const base = ref(10657);
const total = computed(() => base.value * 2);

function incrementar10657() {
  base.value++;
}
</script>
