<template>
  <section class="panel-39289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39289");
const base = ref(39289);
const total = computed(() => base.value * 2);

function incrementar39289() {
  base.value++;
}
</script>
