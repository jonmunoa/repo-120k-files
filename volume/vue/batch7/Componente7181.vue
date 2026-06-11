<template>
  <section class="panel-7181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7181");
const base = ref(7181);
const total = computed(() => base.value * 2);

function incrementar7181() {
  base.value++;
}
</script>
