<template>
  <section class="panel-38289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38289");
const base = ref(38289);
const total = computed(() => base.value * 2);

function incrementar38289() {
  base.value++;
}
</script>
