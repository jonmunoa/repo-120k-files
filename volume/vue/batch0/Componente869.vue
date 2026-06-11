<template>
  <section class="panel-869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 869");
const base = ref(869);
const total = computed(() => base.value * 2);

function incrementar869() {
  base.value++;
}
</script>
