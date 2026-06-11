<template>
  <section class="panel-37825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37825");
const base = ref(37825);
const total = computed(() => base.value * 2);

function incrementar37825() {
  base.value++;
}
</script>
