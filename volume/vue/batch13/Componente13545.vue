<template>
  <section class="panel-13545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13545");
const base = ref(13545);
const total = computed(() => base.value * 2);

function incrementar13545() {
  base.value++;
}
</script>
