<template>
  <section class="panel-50669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50669");
const base = ref(50669);
const total = computed(() => base.value * 2);

function incrementar50669() {
  base.value++;
}
</script>
