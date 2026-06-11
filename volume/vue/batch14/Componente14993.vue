<template>
  <section class="panel-14993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14993");
const base = ref(14993);
const total = computed(() => base.value * 2);

function incrementar14993() {
  base.value++;
}
</script>
