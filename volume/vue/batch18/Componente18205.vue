<template>
  <section class="panel-18205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18205");
const base = ref(18205);
const total = computed(() => base.value * 2);

function incrementar18205() {
  base.value++;
}
</script>
