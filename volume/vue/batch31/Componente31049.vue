<template>
  <section class="panel-31049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31049");
const base = ref(31049);
const total = computed(() => base.value * 2);

function incrementar31049() {
  base.value++;
}
</script>
