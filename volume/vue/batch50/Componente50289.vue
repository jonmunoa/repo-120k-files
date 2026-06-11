<template>
  <section class="panel-50289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50289");
const base = ref(50289);
const total = computed(() => base.value * 2);

function incrementar50289() {
  base.value++;
}
</script>
