<template>
  <section class="panel-17261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17261");
const base = ref(17261);
const total = computed(() => base.value * 2);

function incrementar17261() {
  base.value++;
}
</script>
