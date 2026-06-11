<template>
  <section class="panel-40669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40669");
const base = ref(40669);
const total = computed(() => base.value * 2);

function incrementar40669() {
  base.value++;
}
</script>
