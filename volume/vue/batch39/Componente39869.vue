<template>
  <section class="panel-39869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39869");
const base = ref(39869);
const total = computed(() => base.value * 2);

function incrementar39869() {
  base.value++;
}
</script>
