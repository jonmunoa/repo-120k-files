<template>
  <section class="panel-8881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8881");
const base = ref(8881);
const total = computed(() => base.value * 2);

function incrementar8881() {
  base.value++;
}
</script>
