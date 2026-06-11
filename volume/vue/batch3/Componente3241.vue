<template>
  <section class="panel-3241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3241");
const base = ref(3241);
const total = computed(() => base.value * 2);

function incrementar3241() {
  base.value++;
}
</script>
