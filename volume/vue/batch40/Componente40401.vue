<template>
  <section class="panel-40401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40401");
const base = ref(40401);
const total = computed(() => base.value * 2);

function incrementar40401() {
  base.value++;
}
</script>
