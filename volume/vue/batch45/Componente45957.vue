<template>
  <section class="panel-45957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45957");
const base = ref(45957);
const total = computed(() => base.value * 2);

function incrementar45957() {
  base.value++;
}
</script>
