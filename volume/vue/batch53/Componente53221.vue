<template>
  <section class="panel-53221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53221");
const base = ref(53221);
const total = computed(() => base.value * 2);

function incrementar53221() {
  base.value++;
}
</script>
