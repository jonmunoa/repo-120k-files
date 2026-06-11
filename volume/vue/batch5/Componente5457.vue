<template>
  <section class="panel-5457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5457");
const base = ref(5457);
const total = computed(() => base.value * 2);

function incrementar5457() {
  base.value++;
}
</script>
