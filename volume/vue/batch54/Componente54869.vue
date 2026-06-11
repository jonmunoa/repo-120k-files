<template>
  <section class="panel-54869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54869");
const base = ref(54869);
const total = computed(() => base.value * 2);

function incrementar54869() {
  base.value++;
}
</script>
