<template>
  <section class="panel-18105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18105");
const base = ref(18105);
const total = computed(() => base.value * 2);

function incrementar18105() {
  base.value++;
}
</script>
