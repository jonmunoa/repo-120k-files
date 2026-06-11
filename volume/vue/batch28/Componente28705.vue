<template>
  <section class="panel-28705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28705");
const base = ref(28705);
const total = computed(() => base.value * 2);

function incrementar28705() {
  base.value++;
}
</script>
