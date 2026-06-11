<template>
  <section class="panel-7421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7421");
const base = ref(7421);
const total = computed(() => base.value * 2);

function incrementar7421() {
  base.value++;
}
</script>
