<template>
  <section class="panel-7357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7357");
const base = ref(7357);
const total = computed(() => base.value * 2);

function incrementar7357() {
  base.value++;
}
</script>
