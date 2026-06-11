<template>
  <section class="panel-25833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25833");
const base = ref(25833);
const total = computed(() => base.value * 2);

function incrementar25833() {
  base.value++;
}
</script>
