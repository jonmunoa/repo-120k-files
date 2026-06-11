<template>
  <section class="panel-19501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19501");
const base = ref(19501);
const total = computed(() => base.value * 2);

function incrementar19501() {
  base.value++;
}
</script>
