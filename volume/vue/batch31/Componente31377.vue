<template>
  <section class="panel-31377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31377");
const base = ref(31377);
const total = computed(() => base.value * 2);

function incrementar31377() {
  base.value++;
}
</script>
