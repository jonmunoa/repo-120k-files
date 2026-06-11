<template>
  <section class="panel-21181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21181");
const base = ref(21181);
const total = computed(() => base.value * 2);

function incrementar21181() {
  base.value++;
}
</script>
