<template>
  <section class="panel-8301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8301");
const base = ref(8301);
const total = computed(() => base.value * 2);

function incrementar8301() {
  base.value++;
}
</script>
