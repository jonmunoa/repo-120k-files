<template>
  <section class="panel-13913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13913");
const base = ref(13913);
const total = computed(() => base.value * 2);

function incrementar13913() {
  base.value++;
}
</script>
