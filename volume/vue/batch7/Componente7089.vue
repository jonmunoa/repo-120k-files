<template>
  <section class="panel-7089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7089");
const base = ref(7089);
const total = computed(() => base.value * 2);

function incrementar7089() {
  base.value++;
}
</script>
