<template>
  <section class="panel-8501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8501");
const base = ref(8501);
const total = computed(() => base.value * 2);

function incrementar8501() {
  base.value++;
}
</script>
