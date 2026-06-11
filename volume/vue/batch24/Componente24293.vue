<template>
  <section class="panel-24293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24293");
const base = ref(24293);
const total = computed(() => base.value * 2);

function incrementar24293() {
  base.value++;
}
</script>
