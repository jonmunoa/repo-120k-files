<template>
  <section class="panel-13485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13485");
const base = ref(13485);
const total = computed(() => base.value * 2);

function incrementar13485() {
  base.value++;
}
</script>
