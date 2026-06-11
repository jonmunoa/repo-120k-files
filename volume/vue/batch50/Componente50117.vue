<template>
  <section class="panel-50117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50117");
const base = ref(50117);
const total = computed(() => base.value * 2);

function incrementar50117() {
  base.value++;
}
</script>
