<template>
  <section class="panel-3097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3097");
const base = ref(3097);
const total = computed(() => base.value * 2);

function incrementar3097() {
  base.value++;
}
</script>
