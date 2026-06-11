<template>
  <section class="panel-10181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10181");
const base = ref(10181);
const total = computed(() => base.value * 2);

function incrementar10181() {
  base.value++;
}
</script>
