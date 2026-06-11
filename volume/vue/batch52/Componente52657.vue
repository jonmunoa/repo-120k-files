<template>
  <section class="panel-52657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52657");
const base = ref(52657);
const total = computed(() => base.value * 2);

function incrementar52657() {
  base.value++;
}
</script>
