<template>
  <section class="panel-18737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18737");
const base = ref(18737);
const total = computed(() => base.value * 2);

function incrementar18737() {
  base.value++;
}
</script>
