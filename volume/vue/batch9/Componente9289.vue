<template>
  <section class="panel-9289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9289");
const base = ref(9289);
const total = computed(() => base.value * 2);

function incrementar9289() {
  base.value++;
}
</script>
