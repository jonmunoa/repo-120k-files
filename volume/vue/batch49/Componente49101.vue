<template>
  <section class="panel-49101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49101");
const base = ref(49101);
const total = computed(() => base.value * 2);

function incrementar49101() {
  base.value++;
}
</script>
