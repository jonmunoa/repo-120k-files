<template>
  <section class="panel-36681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36681");
const base = ref(36681);
const total = computed(() => base.value * 2);

function incrementar36681() {
  base.value++;
}
</script>
