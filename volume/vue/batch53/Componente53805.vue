<template>
  <section class="panel-53805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53805");
const base = ref(53805);
const total = computed(() => base.value * 2);

function incrementar53805() {
  base.value++;
}
</script>
