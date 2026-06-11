<template>
  <section class="panel-37925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37925");
const base = ref(37925);
const total = computed(() => base.value * 2);

function incrementar37925() {
  base.value++;
}
</script>
