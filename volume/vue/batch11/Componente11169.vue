<template>
  <section class="panel-11169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11169");
const base = ref(11169);
const total = computed(() => base.value * 2);

function incrementar11169() {
  base.value++;
}
</script>
