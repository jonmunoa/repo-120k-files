<template>
  <section class="panel-18557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18557");
const base = ref(18557);
const total = computed(() => base.value * 2);

function incrementar18557() {
  base.value++;
}
</script>
