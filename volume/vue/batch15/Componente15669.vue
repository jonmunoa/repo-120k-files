<template>
  <section class="panel-15669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15669");
const base = ref(15669);
const total = computed(() => base.value * 2);

function incrementar15669() {
  base.value++;
}
</script>
