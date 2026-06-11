<template>
  <section class="panel-41869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41869");
const base = ref(41869);
const total = computed(() => base.value * 2);

function incrementar41869() {
  base.value++;
}
</script>
