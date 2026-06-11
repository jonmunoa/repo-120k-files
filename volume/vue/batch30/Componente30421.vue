<template>
  <section class="panel-30421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30421");
const base = ref(30421);
const total = computed(() => base.value * 2);

function incrementar30421() {
  base.value++;
}
</script>
