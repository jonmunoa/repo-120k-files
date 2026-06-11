<template>
  <section class="panel-40941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40941");
const base = ref(40941);
const total = computed(() => base.value * 2);

function incrementar40941() {
  base.value++;
}
</script>
