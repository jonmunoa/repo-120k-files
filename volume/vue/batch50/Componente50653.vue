<template>
  <section class="panel-50653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50653");
const base = ref(50653);
const total = computed(() => base.value * 2);

function incrementar50653() {
  base.value++;
}
</script>
