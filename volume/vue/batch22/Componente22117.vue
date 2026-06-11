<template>
  <section class="panel-22117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22117");
const base = ref(22117);
const total = computed(() => base.value * 2);

function incrementar22117() {
  base.value++;
}
</script>
