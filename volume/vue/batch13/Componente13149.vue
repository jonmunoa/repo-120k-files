<template>
  <section class="panel-13149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13149");
const base = ref(13149);
const total = computed(() => base.value * 2);

function incrementar13149() {
  base.value++;
}
</script>
