<template>
  <section class="panel-53705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53705");
const base = ref(53705);
const total = computed(() => base.value * 2);

function incrementar53705() {
  base.value++;
}
</script>
