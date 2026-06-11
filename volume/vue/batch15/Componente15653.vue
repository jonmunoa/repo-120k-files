<template>
  <section class="panel-15653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15653");
const base = ref(15653);
const total = computed(() => base.value * 2);

function incrementar15653() {
  base.value++;
}
</script>
