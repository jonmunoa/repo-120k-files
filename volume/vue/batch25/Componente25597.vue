<template>
  <section class="panel-25597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25597");
const base = ref(25597);
const total = computed(() => base.value * 2);

function incrementar25597() {
  base.value++;
}
</script>
