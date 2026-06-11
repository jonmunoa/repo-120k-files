<template>
  <section class="panel-12705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12705");
const base = ref(12705);
const total = computed(() => base.value * 2);

function incrementar12705() {
  base.value++;
}
</script>
