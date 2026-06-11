<template>
  <section class="panel-24037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24037");
const base = ref(24037);
const total = computed(() => base.value * 2);

function incrementar24037() {
  base.value++;
}
</script>
