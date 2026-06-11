<template>
  <section class="panel-40385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40385");
const base = ref(40385);
const total = computed(() => base.value * 2);

function incrementar40385() {
  base.value++;
}
</script>
