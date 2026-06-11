<template>
  <section class="panel-38869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38869");
const base = ref(38869);
const total = computed(() => base.value * 2);

function incrementar38869() {
  base.value++;
}
</script>
