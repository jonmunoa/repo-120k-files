<template>
  <section class="panel-27869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27869");
const base = ref(27869);
const total = computed(() => base.value * 2);

function incrementar27869() {
  base.value++;
}
</script>
