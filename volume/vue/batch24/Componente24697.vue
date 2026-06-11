<template>
  <section class="panel-24697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24697");
const base = ref(24697);
const total = computed(() => base.value * 2);

function incrementar24697() {
  base.value++;
}
</script>
