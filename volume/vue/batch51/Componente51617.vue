<template>
  <section class="panel-51617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51617");
const base = ref(51617);
const total = computed(() => base.value * 2);

function incrementar51617() {
  base.value++;
}
</script>
