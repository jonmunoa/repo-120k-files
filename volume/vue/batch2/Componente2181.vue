<template>
  <section class="panel-2181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2181");
const base = ref(2181);
const total = computed(() => base.value * 2);

function incrementar2181() {
  base.value++;
}
</script>
