<template>
  <section class="panel-19509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19509");
const base = ref(19509);
const total = computed(() => base.value * 2);

function incrementar19509() {
  base.value++;
}
</script>
