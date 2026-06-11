<template>
  <section class="panel-5521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5521");
const base = ref(5521);
const total = computed(() => base.value * 2);

function incrementar5521() {
  base.value++;
}
</script>
