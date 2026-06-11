<template>
  <section class="panel-33869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33869");
const base = ref(33869);
const total = computed(() => base.value * 2);

function incrementar33869() {
  base.value++;
}
</script>
