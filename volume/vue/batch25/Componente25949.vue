<template>
  <section class="panel-25949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25949");
const base = ref(25949);
const total = computed(() => base.value * 2);

function incrementar25949() {
  base.value++;
}
</script>
