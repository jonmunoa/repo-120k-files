<template>
  <section class="panel-48869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48869");
const base = ref(48869);
const total = computed(() => base.value * 2);

function incrementar48869() {
  base.value++;
}
</script>
