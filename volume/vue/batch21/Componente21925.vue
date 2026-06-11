<template>
  <section class="panel-21925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21925");
const base = ref(21925);
const total = computed(() => base.value * 2);

function incrementar21925() {
  base.value++;
}
</script>
