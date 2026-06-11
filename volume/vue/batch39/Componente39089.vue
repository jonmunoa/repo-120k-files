<template>
  <section class="panel-39089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39089");
const base = ref(39089);
const total = computed(() => base.value * 2);

function incrementar39089() {
  base.value++;
}
</script>
