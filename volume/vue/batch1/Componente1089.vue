<template>
  <section class="panel-1089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1089");
const base = ref(1089);
const total = computed(() => base.value * 2);

function incrementar1089() {
  base.value++;
}
</script>
