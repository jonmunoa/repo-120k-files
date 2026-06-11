<template>
  <section class="panel-12289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12289");
const base = ref(12289);
const total = computed(() => base.value * 2);

function incrementar12289() {
  base.value++;
}
</script>
