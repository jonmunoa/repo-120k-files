<template>
  <section class="panel-29101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29101");
const base = ref(29101);
const total = computed(() => base.value * 2);

function incrementar29101() {
  base.value++;
}
</script>
