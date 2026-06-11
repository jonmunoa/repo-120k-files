<template>
  <section class="panel-35913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35913");
const base = ref(35913);
const total = computed(() => base.value * 2);

function incrementar35913() {
  base.value++;
}
</script>
