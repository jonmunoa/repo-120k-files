<template>
  <section class="panel-22993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22993");
const base = ref(22993);
const total = computed(() => base.value * 2);

function incrementar22993() {
  base.value++;
}
</script>
