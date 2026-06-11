<template>
  <section class="panel-6181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6181");
const base = ref(6181);
const total = computed(() => base.value * 2);

function incrementar6181() {
  base.value++;
}
</script>
