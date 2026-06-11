<template>
  <section class="panel-47521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47521");
const base = ref(47521);
const total = computed(() => base.value * 2);

function incrementar47521() {
  base.value++;
}
</script>
