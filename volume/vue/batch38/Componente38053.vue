<template>
  <section class="panel-38053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38053");
const base = ref(38053);
const total = computed(() => base.value * 2);

function incrementar38053() {
  base.value++;
}
</script>
