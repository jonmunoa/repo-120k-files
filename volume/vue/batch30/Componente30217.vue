<template>
  <section class="panel-30217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30217");
const base = ref(30217);
const total = computed(() => base.value * 2);

function incrementar30217() {
  base.value++;
}
</script>
