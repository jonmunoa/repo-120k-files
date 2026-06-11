<template>
  <section class="panel-34289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34289");
const base = ref(34289);
const total = computed(() => base.value * 2);

function incrementar34289() {
  base.value++;
}
</script>
