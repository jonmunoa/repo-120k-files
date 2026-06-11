<template>
  <section class="panel-35213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35213");
const base = ref(35213);
const total = computed(() => base.value * 2);

function incrementar35213() {
  base.value++;
}
</script>
