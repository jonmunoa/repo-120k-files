<template>
  <section class="panel-47629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47629");
const base = ref(47629);
const total = computed(() => base.value * 2);

function incrementar47629() {
  base.value++;
}
</script>
