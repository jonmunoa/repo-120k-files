<template>
  <section class="panel-53117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53117");
const base = ref(53117);
const total = computed(() => base.value * 2);

function incrementar53117() {
  base.value++;
}
</script>
