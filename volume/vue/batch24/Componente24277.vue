<template>
  <section class="panel-24277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24277");
const base = ref(24277);
const total = computed(() => base.value * 2);

function incrementar24277() {
  base.value++;
}
</script>
