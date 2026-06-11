<template>
  <section class="panel-35925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35925");
const base = ref(35925);
const total = computed(() => base.value * 2);

function incrementar35925() {
  base.value++;
}
</script>
