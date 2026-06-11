<template>
  <section class="panel-34789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34789");
const base = ref(34789);
const total = computed(() => base.value * 2);

function incrementar34789() {
  base.value++;
}
</script>
