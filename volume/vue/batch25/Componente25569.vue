<template>
  <section class="panel-25569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25569");
const base = ref(25569);
const total = computed(() => base.value * 2);

function incrementar25569() {
  base.value++;
}
</script>
