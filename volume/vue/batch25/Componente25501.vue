<template>
  <section class="panel-25501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25501");
const base = ref(25501);
const total = computed(() => base.value * 2);

function incrementar25501() {
  base.value++;
}
</script>
