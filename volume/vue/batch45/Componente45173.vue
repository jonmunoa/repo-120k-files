<template>
  <section class="panel-45173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45173");
const base = ref(45173);
const total = computed(() => base.value * 2);

function incrementar45173() {
  base.value++;
}
</script>
