<template>
  <section class="panel-44953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44953");
const base = ref(44953);
const total = computed(() => base.value * 2);

function incrementar44953() {
  base.value++;
}
</script>
