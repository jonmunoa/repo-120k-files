<template>
  <section class="panel-30181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30181");
const base = ref(30181);
const total = computed(() => base.value * 2);

function incrementar30181() {
  base.value++;
}
</script>
