<template>
  <section class="panel-24869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24869");
const base = ref(24869);
const total = computed(() => base.value * 2);

function incrementar24869() {
  base.value++;
}
</script>
