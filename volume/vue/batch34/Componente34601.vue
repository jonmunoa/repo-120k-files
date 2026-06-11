<template>
  <section class="panel-34601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34601");
const base = ref(34601);
const total = computed(() => base.value * 2);

function incrementar34601() {
  base.value++;
}
</script>
