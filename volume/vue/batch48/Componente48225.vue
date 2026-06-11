<template>
  <section class="panel-48225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48225");
const base = ref(48225);
const total = computed(() => base.value * 2);

function incrementar48225() {
  base.value++;
}
</script>
