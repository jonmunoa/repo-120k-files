<template>
  <section class="panel-10421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10421");
const base = ref(10421);
const total = computed(() => base.value * 2);

function incrementar10421() {
  base.value++;
}
</script>
