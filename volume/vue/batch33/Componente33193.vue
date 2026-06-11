<template>
  <section class="panel-33193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33193");
const base = ref(33193);
const total = computed(() => base.value * 2);

function incrementar33193() {
  base.value++;
}
</script>
