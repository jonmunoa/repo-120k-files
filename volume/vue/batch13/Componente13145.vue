<template>
  <section class="panel-13145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13145");
const base = ref(13145);
const total = computed(() => base.value * 2);

function incrementar13145() {
  base.value++;
}
</script>
