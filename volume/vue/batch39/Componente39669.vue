<template>
  <section class="panel-39669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39669");
const base = ref(39669);
const total = computed(() => base.value * 2);

function incrementar39669() {
  base.value++;
}
</script>
