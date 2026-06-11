<template>
  <section class="panel-33117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33117");
const base = ref(33117);
const total = computed(() => base.value * 2);

function incrementar33117() {
  base.value++;
}
</script>
