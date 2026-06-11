<template>
  <section class="panel-25205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25205");
const base = ref(25205);
const total = computed(() => base.value * 2);

function incrementar25205() {
  base.value++;
}
</script>
