<template>
  <section class="panel-53869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53869");
const base = ref(53869);
const total = computed(() => base.value * 2);

function incrementar53869() {
  base.value++;
}
</script>
