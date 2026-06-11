<template>
  <section class="panel-51649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51649");
const base = ref(51649);
const total = computed(() => base.value * 2);

function incrementar51649() {
  base.value++;
}
</script>
