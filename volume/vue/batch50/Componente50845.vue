<template>
  <section class="panel-50845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50845");
const base = ref(50845);
const total = computed(() => base.value * 2);

function incrementar50845() {
  base.value++;
}
</script>
