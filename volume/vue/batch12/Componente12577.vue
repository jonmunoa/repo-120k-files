<template>
  <section class="panel-12577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12577");
const base = ref(12577);
const total = computed(() => base.value * 2);

function incrementar12577() {
  base.value++;
}
</script>
