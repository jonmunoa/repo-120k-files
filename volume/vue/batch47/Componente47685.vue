<template>
  <section class="panel-47685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47685");
const base = ref(47685);
const total = computed(() => base.value * 2);

function incrementar47685() {
  base.value++;
}
</script>
