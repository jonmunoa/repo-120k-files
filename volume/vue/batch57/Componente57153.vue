<template>
  <section class="panel-57153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57153");
const base = ref(57153);
const total = computed(() => base.value * 2);

function incrementar57153() {
  base.value++;
}
</script>
