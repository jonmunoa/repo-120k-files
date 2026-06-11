<template>
  <section class="panel-4981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4981");
const base = ref(4981);
const total = computed(() => base.value * 2);

function incrementar4981() {
  base.value++;
}
</script>
