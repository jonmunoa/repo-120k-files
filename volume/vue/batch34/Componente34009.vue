<template>
  <section class="panel-34009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34009");
const base = ref(34009);
const total = computed(() => base.value * 2);

function incrementar34009() {
  base.value++;
}
</script>
