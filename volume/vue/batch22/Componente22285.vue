<template>
  <section class="panel-22285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22285");
const base = ref(22285);
const total = computed(() => base.value * 2);

function incrementar22285() {
  base.value++;
}
</script>
