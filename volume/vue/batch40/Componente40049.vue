<template>
  <section class="panel-40049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40049");
const base = ref(40049);
const total = computed(() => base.value * 2);

function incrementar40049() {
  base.value++;
}
</script>
