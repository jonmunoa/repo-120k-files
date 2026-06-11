<template>
  <section class="panel-9869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9869");
const base = ref(9869);
const total = computed(() => base.value * 2);

function incrementar9869() {
  base.value++;
}
</script>
