<template>
  <section class="panel-25685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25685");
const base = ref(25685);
const total = computed(() => base.value * 2);

function incrementar25685() {
  base.value++;
}
</script>
