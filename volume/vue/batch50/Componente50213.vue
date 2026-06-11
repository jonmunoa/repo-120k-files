<template>
  <section class="panel-50213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50213");
const base = ref(50213);
const total = computed(() => base.value * 2);

function incrementar50213() {
  base.value++;
}
</script>
