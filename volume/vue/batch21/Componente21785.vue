<template>
  <section class="panel-21785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21785");
const base = ref(21785);
const total = computed(() => base.value * 2);

function incrementar21785() {
  base.value++;
}
</script>
