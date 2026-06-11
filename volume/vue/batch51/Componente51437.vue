<template>
  <section class="panel-51437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51437");
const base = ref(51437);
const total = computed(() => base.value * 2);

function incrementar51437() {
  base.value++;
}
</script>
