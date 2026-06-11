<template>
  <section class="panel-41213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41213");
const base = ref(41213);
const total = computed(() => base.value * 2);

function incrementar41213() {
  base.value++;
}
</script>
