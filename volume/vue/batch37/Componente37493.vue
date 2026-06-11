<template>
  <section class="panel-37493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37493");
const base = ref(37493);
const total = computed(() => base.value * 2);

function incrementar37493() {
  base.value++;
}
</script>
