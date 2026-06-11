<template>
  <section class="panel-23777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23777");
const base = ref(23777);
const total = computed(() => base.value * 2);

function incrementar23777() {
  base.value++;
}
</script>
