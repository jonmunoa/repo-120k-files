<template>
  <section class="panel-55785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55785");
const base = ref(55785);
const total = computed(() => base.value * 2);

function incrementar55785() {
  base.value++;
}
</script>
