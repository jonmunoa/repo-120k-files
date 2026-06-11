<template>
  <section class="panel-22089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22089");
const base = ref(22089);
const total = computed(() => base.value * 2);

function incrementar22089() {
  base.value++;
}
</script>
