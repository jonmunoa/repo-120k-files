<template>
  <section class="panel-13849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13849");
const base = ref(13849);
const total = computed(() => base.value * 2);

function incrementar13849() {
  base.value++;
}
</script>
