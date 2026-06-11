<template>
  <section class="panel-37261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37261");
const base = ref(37261);
const total = computed(() => base.value * 2);

function incrementar37261() {
  base.value++;
}
</script>
