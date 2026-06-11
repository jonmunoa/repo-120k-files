<template>
  <section class="panel-37289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37289");
const base = ref(37289);
const total = computed(() => base.value * 2);

function incrementar37289() {
  base.value++;
}
</script>
