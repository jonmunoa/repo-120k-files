<template>
  <section class="panel-337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 337");
const base = ref(337);
const total = computed(() => base.value * 2);

function incrementar337() {
  base.value++;
}
</script>
