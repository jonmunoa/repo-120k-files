<template>
  <section class="panel-56009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56009");
const base = ref(56009);
const total = computed(() => base.value * 2);

function incrementar56009() {
  base.value++;
}
</script>
