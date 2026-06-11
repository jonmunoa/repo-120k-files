<template>
  <section class="panel-19241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19241");
const base = ref(19241);
const total = computed(() => base.value * 2);

function incrementar19241() {
  base.value++;
}
</script>
