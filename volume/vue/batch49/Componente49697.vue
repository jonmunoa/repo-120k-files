<template>
  <section class="panel-49697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49697");
const base = ref(49697);
const total = computed(() => base.value * 2);

function incrementar49697() {
  base.value++;
}
</script>
