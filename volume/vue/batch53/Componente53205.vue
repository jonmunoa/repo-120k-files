<template>
  <section class="panel-53205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53205");
const base = ref(53205);
const total = computed(() => base.value * 2);

function incrementar53205() {
  base.value++;
}
</script>
