<template>
  <section class="panel-29037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29037");
const base = ref(29037);
const total = computed(() => base.value * 2);

function incrementar29037() {
  base.value++;
}
</script>
