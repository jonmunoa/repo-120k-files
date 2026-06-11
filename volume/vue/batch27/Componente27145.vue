<template>
  <section class="panel-27145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27145");
const base = ref(27145);
const total = computed(() => base.value * 2);

function incrementar27145() {
  base.value++;
}
</script>
