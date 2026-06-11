<template>
  <section class="panel-57621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57621");
const base = ref(57621);
const total = computed(() => base.value * 2);

function incrementar57621() {
  base.value++;
}
</script>
