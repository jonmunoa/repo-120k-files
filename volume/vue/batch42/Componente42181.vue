<template>
  <section class="panel-42181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42181");
const base = ref(42181);
const total = computed(() => base.value * 2);

function incrementar42181() {
  base.value++;
}
</script>
