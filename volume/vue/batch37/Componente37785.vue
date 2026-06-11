<template>
  <section class="panel-37785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37785");
const base = ref(37785);
const total = computed(() => base.value * 2);

function incrementar37785() {
  base.value++;
}
</script>
