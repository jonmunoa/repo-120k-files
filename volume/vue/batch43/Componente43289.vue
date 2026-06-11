<template>
  <section class="panel-43289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43289");
const base = ref(43289);
const total = computed(() => base.value * 2);

function incrementar43289() {
  base.value++;
}
</script>
