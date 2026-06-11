<template>
  <section class="panel-17869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17869");
const base = ref(17869);
const total = computed(() => base.value * 2);

function incrementar17869() {
  base.value++;
}
</script>
