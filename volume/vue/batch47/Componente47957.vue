<template>
  <section class="panel-47957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47957");
const base = ref(47957);
const total = computed(() => base.value * 2);

function incrementar47957() {
  base.value++;
}
</script>
