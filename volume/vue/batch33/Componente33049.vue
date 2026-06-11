<template>
  <section class="panel-33049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33049");
const base = ref(33049);
const total = computed(() => base.value * 2);

function incrementar33049() {
  base.value++;
}
</script>
