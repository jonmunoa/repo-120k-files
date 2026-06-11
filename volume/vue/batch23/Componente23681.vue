<template>
  <section class="panel-23681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23681");
const base = ref(23681);
const total = computed(() => base.value * 2);

function incrementar23681() {
  base.value++;
}
</script>
