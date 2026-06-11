<template>
  <section class="panel-56669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56669");
const base = ref(56669);
const total = computed(() => base.value * 2);

function incrementar56669() {
  base.value++;
}
</script>
