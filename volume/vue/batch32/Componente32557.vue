<template>
  <section class="panel-32557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32557");
const base = ref(32557);
const total = computed(() => base.value * 2);

function incrementar32557() {
  base.value++;
}
</script>
