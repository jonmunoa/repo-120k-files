<template>
  <section class="panel-13533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13533");
const base = ref(13533);
const total = computed(() => base.value * 2);

function incrementar13533() {
  base.value++;
}
</script>
