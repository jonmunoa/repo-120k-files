<template>
  <section class="panel-2117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2117");
const base = ref(2117);
const total = computed(() => base.value * 2);

function incrementar2117() {
  base.value++;
}
</script>
