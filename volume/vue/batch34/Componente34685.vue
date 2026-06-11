<template>
  <section class="panel-34685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34685");
const base = ref(34685);
const total = computed(() => base.value * 2);

function incrementar34685() {
  base.value++;
}
</script>
