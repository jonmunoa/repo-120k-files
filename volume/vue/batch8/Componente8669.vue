<template>
  <section class="panel-8669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8669");
const base = ref(8669);
const total = computed(() => base.value * 2);

function incrementar8669() {
  base.value++;
}
</script>
