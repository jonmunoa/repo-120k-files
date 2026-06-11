<template>
  <section class="panel-42869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42869");
const base = ref(42869);
const total = computed(() => base.value * 2);

function incrementar42869() {
  base.value++;
}
</script>
