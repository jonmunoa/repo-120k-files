<template>
  <section class="panel-4045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4045");
const base = ref(4045);
const total = computed(() => base.value * 2);

function incrementar4045() {
  base.value++;
}
</script>
