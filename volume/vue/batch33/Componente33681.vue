<template>
  <section class="panel-33681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33681");
const base = ref(33681);
const total = computed(() => base.value * 2);

function incrementar33681() {
  base.value++;
}
</script>
