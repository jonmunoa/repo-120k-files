<template>
  <section class="panel-35153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35153");
const base = ref(35153);
const total = computed(() => base.value * 2);

function incrementar35153() {
  base.value++;
}
</script>
