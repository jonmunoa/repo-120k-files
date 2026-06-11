<template>
  <section class="panel-36849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36849");
const base = ref(36849);
const total = computed(() => base.value * 2);

function incrementar36849() {
  base.value++;
}
</script>
