<template>
  <section class="panel-57149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57149");
const base = ref(57149);
const total = computed(() => base.value * 2);

function incrementar57149() {
  base.value++;
}
</script>
