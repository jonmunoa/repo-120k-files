<template>
  <section class="panel-12401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12401");
const base = ref(12401);
const total = computed(() => base.value * 2);

function incrementar12401() {
  base.value++;
}
</script>
