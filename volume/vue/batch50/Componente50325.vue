<template>
  <section class="panel-50325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50325");
const base = ref(50325);
const total = computed(() => base.value * 2);

function incrementar50325() {
  base.value++;
}
</script>
