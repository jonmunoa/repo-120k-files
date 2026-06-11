<template>
  <section class="panel-20869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20869");
const base = ref(20869);
const total = computed(() => base.value * 2);

function incrementar20869() {
  base.value++;
}
</script>
