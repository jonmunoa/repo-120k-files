<template>
  <section class="panel-19705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19705");
const base = ref(19705);
const total = computed(() => base.value * 2);

function incrementar19705() {
  base.value++;
}
</script>
