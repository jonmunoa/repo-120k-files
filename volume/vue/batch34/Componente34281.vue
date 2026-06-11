<template>
  <section class="panel-34281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34281");
const base = ref(34281);
const total = computed(() => base.value * 2);

function incrementar34281() {
  base.value++;
}
</script>
