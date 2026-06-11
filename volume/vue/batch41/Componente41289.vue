<template>
  <section class="panel-41289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41289");
const base = ref(41289);
const total = computed(() => base.value * 2);

function incrementar41289() {
  base.value++;
}
</script>
