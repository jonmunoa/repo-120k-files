<template>
  <section class="panel-51337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51337");
const base = ref(51337);
const total = computed(() => base.value * 2);

function incrementar51337() {
  base.value++;
}
</script>
