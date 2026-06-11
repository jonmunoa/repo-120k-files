<template>
  <section class="panel-23333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23333");
const base = ref(23333);
const total = computed(() => base.value * 2);

function incrementar23333() {
  base.value++;
}
</script>
