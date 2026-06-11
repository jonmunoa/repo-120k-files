<template>
  <section class="panel-56393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56393");
const base = ref(56393);
const total = computed(() => base.value * 2);

function incrementar56393() {
  base.value++;
}
</script>
