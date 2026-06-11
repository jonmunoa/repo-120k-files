<template>
  <section class="panel-31669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31669");
const base = ref(31669);
const total = computed(() => base.value * 2);

function incrementar31669() {
  base.value++;
}
</script>
