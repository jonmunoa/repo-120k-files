<template>
  <section class="panel-5669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5669");
const base = ref(5669);
const total = computed(() => base.value * 2);

function incrementar5669() {
  base.value++;
}
</script>
