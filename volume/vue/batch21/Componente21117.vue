<template>
  <section class="panel-21117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21117");
const base = ref(21117);
const total = computed(() => base.value * 2);

function incrementar21117() {
  base.value++;
}
</script>
