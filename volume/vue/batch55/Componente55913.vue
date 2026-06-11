<template>
  <section class="panel-55913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55913");
const base = ref(55913);
const total = computed(() => base.value * 2);

function incrementar55913() {
  base.value++;
}
</script>
