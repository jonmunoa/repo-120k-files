<template>
  <section class="panel-44973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44973");
const base = ref(44973);
const total = computed(() => base.value * 2);

function incrementar44973() {
  base.value++;
}
</script>
