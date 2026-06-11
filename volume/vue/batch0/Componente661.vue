<template>
  <section class="panel-661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 661");
const base = ref(661);
const total = computed(() => base.value * 2);

function incrementar661() {
  base.value++;
}
</script>
