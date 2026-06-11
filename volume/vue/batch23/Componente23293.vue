<template>
  <section class="panel-23293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23293");
const base = ref(23293);
const total = computed(() => base.value * 2);

function incrementar23293() {
  base.value++;
}
</script>
