<template>
  <section class="panel-25869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25869");
const base = ref(25869);
const total = computed(() => base.value * 2);

function incrementar25869() {
  base.value++;
}
</script>
