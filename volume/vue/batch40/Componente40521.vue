<template>
  <section class="panel-40521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40521");
const base = ref(40521);
const total = computed(() => base.value * 2);

function incrementar40521() {
  base.value++;
}
</script>
