<template>
  <section class="panel-13289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13289");
const base = ref(13289);
const total = computed(() => base.value * 2);

function incrementar13289() {
  base.value++;
}
</script>
