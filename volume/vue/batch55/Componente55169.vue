<template>
  <section class="panel-55169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55169");
const base = ref(55169);
const total = computed(() => base.value * 2);

function incrementar55169() {
  base.value++;
}
</script>
