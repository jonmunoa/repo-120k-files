<template>
  <section class="panel-27785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27785");
const base = ref(27785);
const total = computed(() => base.value * 2);

function incrementar27785() {
  base.value++;
}
</script>
