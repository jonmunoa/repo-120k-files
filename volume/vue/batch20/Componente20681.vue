<template>
  <section class="panel-20681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20681");
const base = ref(20681);
const total = computed(() => base.value * 2);

function incrementar20681() {
  base.value++;
}
</script>
