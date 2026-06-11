<template>
  <section class="panel-421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 421");
const base = ref(421);
const total = computed(() => base.value * 2);

function incrementar421() {
  base.value++;
}
</script>
