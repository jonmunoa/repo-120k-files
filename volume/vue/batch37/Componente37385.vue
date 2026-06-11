<template>
  <section class="panel-37385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37385");
const base = ref(37385);
const total = computed(() => base.value * 2);

function incrementar37385() {
  base.value++;
}
</script>
