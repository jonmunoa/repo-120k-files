<template>
  <section class="panel-41089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41089");
const base = ref(41089);
const total = computed(() => base.value * 2);

function incrementar41089() {
  base.value++;
}
</script>
