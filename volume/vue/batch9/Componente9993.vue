<template>
  <section class="panel-9993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9993");
const base = ref(9993);
const total = computed(() => base.value * 2);

function incrementar9993() {
  base.value++;
}
</script>
