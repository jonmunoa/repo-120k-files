<template>
  <section class="panel-13385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13385");
const base = ref(13385);
const total = computed(() => base.value * 2);

function incrementar13385() {
  base.value++;
}
</script>
