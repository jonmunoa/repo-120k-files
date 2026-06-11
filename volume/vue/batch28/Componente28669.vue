<template>
  <section class="panel-28669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28669");
const base = ref(28669);
const total = computed(() => base.value * 2);

function incrementar28669() {
  base.value++;
}
</script>
