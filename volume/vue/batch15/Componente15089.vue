<template>
  <section class="panel-15089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15089");
const base = ref(15089);
const total = computed(() => base.value * 2);

function incrementar15089() {
  base.value++;
}
</script>
