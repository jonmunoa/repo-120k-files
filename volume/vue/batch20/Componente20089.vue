<template>
  <section class="panel-20089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20089");
const base = ref(20089);
const total = computed(() => base.value * 2);

function incrementar20089() {
  base.value++;
}
</script>
