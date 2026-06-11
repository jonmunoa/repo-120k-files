<template>
  <section class="panel-7973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7973");
const base = ref(7973);
const total = computed(() => base.value * 2);

function incrementar7973() {
  base.value++;
}
</script>
