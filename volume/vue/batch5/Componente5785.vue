<template>
  <section class="panel-5785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5785");
const base = ref(5785);
const total = computed(() => base.value * 2);

function incrementar5785() {
  base.value++;
}
</script>
