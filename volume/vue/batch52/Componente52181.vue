<template>
  <section class="panel-52181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52181");
const base = ref(52181);
const total = computed(() => base.value * 2);

function incrementar52181() {
  base.value++;
}
</script>
