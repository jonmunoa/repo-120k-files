<template>
  <section class="panel-27289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27289");
const base = ref(27289);
const total = computed(() => base.value * 2);

function incrementar27289() {
  base.value++;
}
</script>
