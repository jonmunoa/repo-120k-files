<template>
  <section class="panel-31697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31697");
const base = ref(31697);
const total = computed(() => base.value * 2);

function incrementar31697() {
  base.value++;
}
</script>
