<template>
  <section class="panel-9193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9193");
const base = ref(9193);
const total = computed(() => base.value * 2);

function incrementar9193() {
  base.value++;
}
</script>
