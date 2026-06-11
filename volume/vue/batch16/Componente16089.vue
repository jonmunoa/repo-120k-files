<template>
  <section class="panel-16089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16089");
const base = ref(16089);
const total = computed(() => base.value * 2);

function incrementar16089() {
  base.value++;
}
</script>
