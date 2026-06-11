<template>
  <section class="panel-17941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17941");
const base = ref(17941);
const total = computed(() => base.value * 2);

function incrementar17941() {
  base.value++;
}
</script>
