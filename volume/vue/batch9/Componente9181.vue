<template>
  <section class="panel-9181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9181");
const base = ref(9181);
const total = computed(() => base.value * 2);

function incrementar9181() {
  base.value++;
}
</script>
