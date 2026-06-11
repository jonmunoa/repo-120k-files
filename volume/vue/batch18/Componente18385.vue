<template>
  <section class="panel-18385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18385");
const base = ref(18385);
const total = computed(() => base.value * 2);

function incrementar18385() {
  base.value++;
}
</script>
