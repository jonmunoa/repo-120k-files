<template>
  <section class="panel-19293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19293");
const base = ref(19293);
const total = computed(() => base.value * 2);

function incrementar19293() {
  base.value++;
}
</script>
