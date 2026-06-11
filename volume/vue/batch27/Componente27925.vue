<template>
  <section class="panel-27925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27925");
const base = ref(27925);
const total = computed(() => base.value * 2);

function incrementar27925() {
  base.value++;
}
</script>
