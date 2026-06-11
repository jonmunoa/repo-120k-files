<template>
  <section class="panel-47261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47261");
const base = ref(47261);
const total = computed(() => base.value * 2);

function incrementar47261() {
  base.value++;
}
</script>
