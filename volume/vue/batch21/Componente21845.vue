<template>
  <section class="panel-21845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21845");
const base = ref(21845);
const total = computed(() => base.value * 2);

function incrementar21845() {
  base.value++;
}
</script>
