<template>
  <section class="panel-14653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14653");
const base = ref(14653);
const total = computed(() => base.value * 2);

function incrementar14653() {
  base.value++;
}
</script>
