<template>
  <section class="panel-50549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50549");
const base = ref(50549);
const total = computed(() => base.value * 2);

function incrementar50549() {
  base.value++;
}
</script>
