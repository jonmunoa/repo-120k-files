<template>
  <section class="panel-53501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53501");
const base = ref(53501);
const total = computed(() => base.value * 2);

function incrementar53501() {
  base.value++;
}
</script>
