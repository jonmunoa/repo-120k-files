<template>
  <section class="panel-1181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1181");
const base = ref(1181);
const total = computed(() => base.value * 2);

function incrementar1181() {
  base.value++;
}
</script>
