<template>
  <section class="panel-14869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14869");
const base = ref(14869);
const total = computed(() => base.value * 2);

function incrementar14869() {
  base.value++;
}
</script>
