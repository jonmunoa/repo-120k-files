<template>
  <section class="panel-39917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39917");
const base = ref(39917);
const total = computed(() => base.value * 2);

function incrementar39917() {
  base.value++;
}
</script>
