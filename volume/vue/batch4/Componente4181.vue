<template>
  <section class="panel-4181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4181");
const base = ref(4181);
const total = computed(() => base.value * 2);

function incrementar4181() {
  base.value++;
}
</script>
