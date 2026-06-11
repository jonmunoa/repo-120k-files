<template>
  <section class="panel-7869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7869");
const base = ref(7869);
const total = computed(() => base.value * 2);

function incrementar7869() {
  base.value++;
}
</script>
