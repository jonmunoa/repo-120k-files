<template>
  <section class="panel-50785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50785");
const base = ref(50785);
const total = computed(() => base.value * 2);

function incrementar50785() {
  base.value++;
}
</script>
