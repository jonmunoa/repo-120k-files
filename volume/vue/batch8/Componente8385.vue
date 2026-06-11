<template>
  <section class="panel-8385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8385");
const base = ref(8385);
const total = computed(() => base.value * 2);

function incrementar8385() {
  base.value++;
}
</script>
