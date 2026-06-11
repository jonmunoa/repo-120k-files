<template>
  <section class="panel-22925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22925");
const base = ref(22925);
const total = computed(() => base.value * 2);

function incrementar22925() {
  base.value++;
}
</script>
