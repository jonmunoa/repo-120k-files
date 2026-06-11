<template>
  <section class="panel-38557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38557");
const base = ref(38557);
const total = computed(() => base.value * 2);

function incrementar38557() {
  base.value++;
}
</script>
