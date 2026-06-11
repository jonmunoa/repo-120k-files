<template>
  <section class="panel-47993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47993");
const base = ref(47993);
const total = computed(() => base.value * 2);

function incrementar47993() {
  base.value++;
}
</script>
