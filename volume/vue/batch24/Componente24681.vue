<template>
  <section class="panel-24681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24681");
const base = ref(24681);
const total = computed(() => base.value * 2);

function incrementar24681() {
  base.value++;
}
</script>
