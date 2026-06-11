<template>
  <section class="panel-21681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21681");
const base = ref(21681);
const total = computed(() => base.value * 2);

function incrementar21681() {
  base.value++;
}
</script>
