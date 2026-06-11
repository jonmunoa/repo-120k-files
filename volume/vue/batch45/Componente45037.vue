<template>
  <section class="panel-45037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45037");
const base = ref(45037);
const total = computed(() => base.value * 2);

function incrementar45037() {
  base.value++;
}
</script>
