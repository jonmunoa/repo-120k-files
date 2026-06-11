<template>
  <section class="panel-50869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50869");
const base = ref(50869);
const total = computed(() => base.value * 2);

function incrementar50869() {
  base.value++;
}
</script>
