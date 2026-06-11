<template>
  <section class="panel-6293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6293");
const base = ref(6293);
const total = computed(() => base.value * 2);

function incrementar6293() {
  base.value++;
}
</script>
