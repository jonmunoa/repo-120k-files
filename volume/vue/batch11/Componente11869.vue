<template>
  <section class="panel-11869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11869");
const base = ref(11869);
const total = computed(() => base.value * 2);

function incrementar11869() {
  base.value++;
}
</script>
