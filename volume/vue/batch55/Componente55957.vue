<template>
  <section class="panel-55957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55957");
const base = ref(55957);
const total = computed(() => base.value * 2);

function incrementar55957() {
  base.value++;
}
</script>
