<template>
  <section class="panel-13109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13109");
const base = ref(13109);
const total = computed(() => base.value * 2);

function incrementar13109() {
  base.value++;
}
</script>
