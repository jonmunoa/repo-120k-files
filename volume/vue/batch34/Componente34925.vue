<template>
  <section class="panel-34925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34925");
const base = ref(34925);
const total = computed(() => base.value * 2);

function incrementar34925() {
  base.value++;
}
</script>
