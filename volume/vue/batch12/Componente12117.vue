<template>
  <section class="panel-12117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12117");
const base = ref(12117);
const total = computed(() => base.value * 2);

function incrementar12117() {
  base.value++;
}
</script>
