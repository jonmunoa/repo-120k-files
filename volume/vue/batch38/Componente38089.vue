<template>
  <section class="panel-38089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38089");
const base = ref(38089);
const total = computed(() => base.value * 2);

function incrementar38089() {
  base.value++;
}
</script>
