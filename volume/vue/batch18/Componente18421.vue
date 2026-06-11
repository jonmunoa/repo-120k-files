<template>
  <section class="panel-18421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18421");
const base = ref(18421);
const total = computed(() => base.value * 2);

function incrementar18421() {
  base.value++;
}
</script>
