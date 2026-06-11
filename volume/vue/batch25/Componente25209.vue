<template>
  <section class="panel-25209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25209");
const base = ref(25209);
const total = computed(() => base.value * 2);

function incrementar25209() {
  base.value++;
}
</script>
