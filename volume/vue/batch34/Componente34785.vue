<template>
  <section class="panel-34785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34785");
const base = ref(34785);
const total = computed(() => base.value * 2);

function incrementar34785() {
  base.value++;
}
</script>
