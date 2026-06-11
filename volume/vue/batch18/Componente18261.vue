<template>
  <section class="panel-18261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18261");
const base = ref(18261);
const total = computed(() => base.value * 2);

function incrementar18261() {
  base.value++;
}
</script>
