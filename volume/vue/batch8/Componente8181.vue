<template>
  <section class="panel-8181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8181");
const base = ref(8181);
const total = computed(() => base.value * 2);

function incrementar8181() {
  base.value++;
}
</script>
