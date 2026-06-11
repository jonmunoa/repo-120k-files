<template>
  <section class="panel-51925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51925");
const base = ref(51925);
const total = computed(() => base.value * 2);

function incrementar51925() {
  base.value++;
}
</script>
