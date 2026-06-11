<template>
  <section class="panel-18957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18957");
const base = ref(18957);
const total = computed(() => base.value * 2);

function incrementar18957() {
  base.value++;
}
</script>
