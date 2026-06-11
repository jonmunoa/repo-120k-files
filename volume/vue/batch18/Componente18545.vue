<template>
  <section class="panel-18545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18545");
const base = ref(18545);
const total = computed(() => base.value * 2);

function incrementar18545() {
  base.value++;
}
</script>
