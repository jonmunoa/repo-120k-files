<template>
  <section class="panel-1669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1669");
const base = ref(1669);
const total = computed(() => base.value * 2);

function incrementar1669() {
  base.value++;
}
</script>
