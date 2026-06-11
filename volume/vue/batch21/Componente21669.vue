<template>
  <section class="panel-21669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21669");
const base = ref(21669);
const total = computed(() => base.value * 2);

function incrementar21669() {
  base.value++;
}
</script>
