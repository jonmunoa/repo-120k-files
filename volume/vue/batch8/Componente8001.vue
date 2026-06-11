<template>
  <section class="panel-8001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8001");
const base = ref(8001);
const total = computed(() => base.value * 2);

function incrementar8001() {
  base.value++;
}
</script>
