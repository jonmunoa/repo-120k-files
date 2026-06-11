<template>
  <section class="panel-36217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36217");
const base = ref(36217);
const total = computed(() => base.value * 2);

function incrementar36217() {
  base.value++;
}
</script>
