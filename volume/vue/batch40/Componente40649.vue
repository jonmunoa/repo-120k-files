<template>
  <section class="panel-40649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40649");
const base = ref(40649);
const total = computed(() => base.value * 2);

function incrementar40649() {
  base.value++;
}
</script>
