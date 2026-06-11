<template>
  <section class="panel-33785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33785");
const base = ref(33785);
const total = computed(() => base.value * 2);

function incrementar33785() {
  base.value++;
}
</script>
