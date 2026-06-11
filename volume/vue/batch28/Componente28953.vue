<template>
  <section class="panel-28953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28953");
const base = ref(28953);
const total = computed(() => base.value * 2);

function incrementar28953() {
  base.value++;
}
</script>
