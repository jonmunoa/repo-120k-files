<template>
  <section class="panel-47289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47289");
const base = ref(47289);
const total = computed(() => base.value * 2);

function incrementar47289() {
  base.value++;
}
</script>
