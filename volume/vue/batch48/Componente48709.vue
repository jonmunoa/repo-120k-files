<template>
  <section class="panel-48709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48709");
const base = ref(48709);
const total = computed(() => base.value * 2);

function incrementar48709() {
  base.value++;
}
</script>
