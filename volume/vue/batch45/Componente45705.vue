<template>
  <section class="panel-45705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45705");
const base = ref(45705);
const total = computed(() => base.value * 2);

function incrementar45705() {
  base.value++;
}
</script>
