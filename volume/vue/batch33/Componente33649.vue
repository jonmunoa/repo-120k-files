<template>
  <section class="panel-33649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33649");
const base = ref(33649);
const total = computed(() => base.value * 2);

function incrementar33649() {
  base.value++;
}
</script>
