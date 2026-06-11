<template>
  <section class="panel-31953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31953");
const base = ref(31953);
const total = computed(() => base.value * 2);

function incrementar31953() {
  base.value++;
}
</script>
