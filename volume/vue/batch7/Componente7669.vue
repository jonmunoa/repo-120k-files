<template>
  <section class="panel-7669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7669");
const base = ref(7669);
const total = computed(() => base.value * 2);

function incrementar7669() {
  base.value++;
}
</script>
