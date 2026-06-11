<template>
  <section class="panel-18965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18965");
const base = ref(18965);
const total = computed(() => base.value * 2);

function incrementar18965() {
  base.value++;
}
</script>
