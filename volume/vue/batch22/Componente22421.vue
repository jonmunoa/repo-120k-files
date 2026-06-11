<template>
  <section class="panel-22421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22421");
const base = ref(22421);
const total = computed(() => base.value * 2);

function incrementar22421() {
  base.value++;
}
</script>
