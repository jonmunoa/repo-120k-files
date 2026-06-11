<template>
  <section class="panel-20733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20733");
const base = ref(20733);
const total = computed(() => base.value * 2);

function incrementar20733() {
  base.value++;
}
</script>
