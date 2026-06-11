<template>
  <section class="panel-15181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15181");
const base = ref(15181);
const total = computed(() => base.value * 2);

function incrementar15181() {
  base.value++;
}
</script>
