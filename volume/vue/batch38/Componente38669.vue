<template>
  <section class="panel-38669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38669");
const base = ref(38669);
const total = computed(() => base.value * 2);

function incrementar38669() {
  base.value++;
}
</script>
