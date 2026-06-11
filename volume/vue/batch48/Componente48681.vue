<template>
  <section class="panel-48681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48681");
const base = ref(48681);
const total = computed(() => base.value * 2);

function incrementar48681() {
  base.value++;
}
</script>
