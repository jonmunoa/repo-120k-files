<template>
  <section class="panel-4021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4021");
const base = ref(4021);
const total = computed(() => base.value * 2);

function incrementar4021() {
  base.value++;
}
</script>
