<template>
  <section class="panel-393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 393");
const base = ref(393);
const total = computed(() => base.value * 2);

function incrementar393() {
  base.value++;
}
</script>
