<template>
  <section class="panel-38145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38145");
const base = ref(38145);
const total = computed(() => base.value * 2);

function incrementar38145() {
  base.value++;
}
</script>
