<template>
  <section class="panel-9145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9145");
const base = ref(9145);
const total = computed(() => base.value * 2);

function incrementar9145() {
  base.value++;
}
</script>
