<template>
  <section class="panel-9697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9697");
const base = ref(9697);
const total = computed(() => base.value * 2);

function incrementar9697() {
  base.value++;
}
</script>
