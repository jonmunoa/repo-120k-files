<template>
  <section class="panel-8705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8705");
const base = ref(8705);
const total = computed(() => base.value * 2);

function incrementar8705() {
  base.value++;
}
</script>
