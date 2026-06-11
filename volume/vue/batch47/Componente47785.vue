<template>
  <section class="panel-47785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47785");
const base = ref(47785);
const total = computed(() => base.value * 2);

function incrementar47785() {
  base.value++;
}
</script>
