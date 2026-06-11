<template>
  <section class="panel-17117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17117");
const base = ref(17117);
const total = computed(() => base.value * 2);

function incrementar17117() {
  base.value++;
}
</script>
