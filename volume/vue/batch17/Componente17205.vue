<template>
  <section class="panel-17205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17205");
const base = ref(17205);
const total = computed(() => base.value * 2);

function incrementar17205() {
  base.value++;
}
</script>
