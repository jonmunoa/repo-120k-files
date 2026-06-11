<template>
  <section class="panel-13769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13769");
const base = ref(13769);
const total = computed(() => base.value * 2);

function incrementar13769() {
  base.value++;
}
</script>
