<template>
  <section class="panel-47625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47625");
const base = ref(47625);
const total = computed(() => base.value * 2);

function incrementar47625() {
  base.value++;
}
</script>
