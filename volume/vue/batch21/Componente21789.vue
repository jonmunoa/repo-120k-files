<template>
  <section class="panel-21789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21789");
const base = ref(21789);
const total = computed(() => base.value * 2);

function incrementar21789() {
  base.value++;
}
</script>
