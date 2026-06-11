<template>
  <section class="panel-17785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17785");
const base = ref(17785);
const total = computed(() => base.value * 2);

function incrementar17785() {
  base.value++;
}
</script>
