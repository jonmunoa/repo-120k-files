<template>
  <section class="panel-54289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54289");
const base = ref(54289);
const total = computed(() => base.value * 2);

function incrementar54289() {
  base.value++;
}
</script>
