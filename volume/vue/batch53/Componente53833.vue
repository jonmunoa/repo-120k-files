<template>
  <section class="panel-53833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53833");
const base = ref(53833);
const total = computed(() => base.value * 2);

function incrementar53833() {
  base.value++;
}
</script>
