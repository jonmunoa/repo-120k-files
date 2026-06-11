<template>
  <section class="panel-9037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9037");
const base = ref(9037);
const total = computed(() => base.value * 2);

function incrementar9037() {
  base.value++;
}
</script>
