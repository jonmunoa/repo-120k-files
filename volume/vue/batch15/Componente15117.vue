<template>
  <section class="panel-15117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15117");
const base = ref(15117);
const total = computed(() => base.value * 2);

function incrementar15117() {
  base.value++;
}
</script>
