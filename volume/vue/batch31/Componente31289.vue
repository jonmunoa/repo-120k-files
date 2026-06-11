<template>
  <section class="panel-31289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31289");
const base = ref(31289);
const total = computed(() => base.value * 2);

function incrementar31289() {
  base.value++;
}
</script>
