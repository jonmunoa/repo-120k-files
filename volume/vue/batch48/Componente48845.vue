<template>
  <section class="panel-48845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48845");
const base = ref(48845);
const total = computed(() => base.value * 2);

function incrementar48845() {
  base.value++;
}
</script>
