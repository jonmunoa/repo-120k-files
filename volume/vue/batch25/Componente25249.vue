<template>
  <section class="panel-25249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25249");
const base = ref(25249);
const total = computed(() => base.value * 2);

function incrementar25249() {
  base.value++;
}
</script>
