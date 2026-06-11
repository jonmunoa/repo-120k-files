<template>
  <section class="panel-32849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32849");
const base = ref(32849);
const total = computed(() => base.value * 2);

function incrementar32849() {
  base.value++;
}
</script>
