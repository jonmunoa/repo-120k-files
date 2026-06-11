<template>
  <section class="panel-13177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13177");
const base = ref(13177);
const total = computed(() => base.value * 2);

function incrementar13177() {
  base.value++;
}
</script>
