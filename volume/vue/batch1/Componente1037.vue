<template>
  <section class="panel-1037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1037");
const base = ref(1037);
const total = computed(() => base.value * 2);

function incrementar1037() {
  base.value++;
}
</script>
