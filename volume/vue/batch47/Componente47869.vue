<template>
  <section class="panel-47869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47869");
const base = ref(47869);
const total = computed(() => base.value * 2);

function incrementar47869() {
  base.value++;
}
</script>
