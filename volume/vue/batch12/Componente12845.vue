<template>
  <section class="panel-12845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12845");
const base = ref(12845);
const total = computed(() => base.value * 2);

function incrementar12845() {
  base.value++;
}
</script>
