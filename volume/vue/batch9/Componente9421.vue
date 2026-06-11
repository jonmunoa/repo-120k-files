<template>
  <section class="panel-9421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9421");
const base = ref(9421);
const total = computed(() => base.value * 2);

function incrementar9421() {
  base.value++;
}
</script>
