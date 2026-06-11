<template>
  <section class="panel-2925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2925");
const base = ref(2925);
const total = computed(() => base.value * 2);

function incrementar2925() {
  base.value++;
}
</script>
