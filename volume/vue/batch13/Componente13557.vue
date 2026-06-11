<template>
  <section class="panel-13557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13557");
const base = ref(13557);
const total = computed(() => base.value * 2);

function incrementar13557() {
  base.value++;
}
</script>
