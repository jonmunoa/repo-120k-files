<template>
  <section class="panel-9089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9089");
const base = ref(9089);
const total = computed(() => base.value * 2);

function incrementar9089() {
  base.value++;
}
</script>
