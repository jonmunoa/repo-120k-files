<template>
  <section class="panel-17233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17233");
const base = ref(17233);
const total = computed(() => base.value * 2);

function incrementar17233() {
  base.value++;
}
</script>
