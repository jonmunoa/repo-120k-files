<template>
  <section class="panel-23089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23089");
const base = ref(23089);
const total = computed(() => base.value * 2);

function incrementar23089() {
  base.value++;
}
</script>
