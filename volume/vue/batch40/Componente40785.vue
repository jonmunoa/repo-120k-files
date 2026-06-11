<template>
  <section class="panel-40785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40785");
const base = ref(40785);
const total = computed(() => base.value * 2);

function incrementar40785() {
  base.value++;
}
</script>
