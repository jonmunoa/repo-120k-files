<template>
  <section class="panel-4289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4289");
const base = ref(4289);
const total = computed(() => base.value * 2);

function incrementar4289() {
  base.value++;
}
</script>
