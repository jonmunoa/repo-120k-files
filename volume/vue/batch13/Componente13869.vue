<template>
  <section class="panel-13869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13869");
const base = ref(13869);
const total = computed(() => base.value * 2);

function incrementar13869() {
  base.value++;
}
</script>
