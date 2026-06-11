<template>
  <section class="panel-2177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2177");
const base = ref(2177);
const total = computed(() => base.value * 2);

function incrementar2177() {
  base.value++;
}
</script>
