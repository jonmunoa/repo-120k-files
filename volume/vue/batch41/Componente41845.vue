<template>
  <section class="panel-41845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41845");
const base = ref(41845);
const total = computed(() => base.value * 2);

function incrementar41845() {
  base.value++;
}
</script>
