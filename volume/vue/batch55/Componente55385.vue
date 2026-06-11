<template>
  <section class="panel-55385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55385");
const base = ref(55385);
const total = computed(() => base.value * 2);

function incrementar55385() {
  base.value++;
}
</script>
