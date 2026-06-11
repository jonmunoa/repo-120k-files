<template>
  <section class="panel-50713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50713");
const base = ref(50713);
const total = computed(() => base.value * 2);

function incrementar50713() {
  base.value++;
}
</script>
