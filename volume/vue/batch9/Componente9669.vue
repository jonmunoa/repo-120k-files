<template>
  <section class="panel-9669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9669");
const base = ref(9669);
const total = computed(() => base.value * 2);

function incrementar9669() {
  base.value++;
}
</script>
