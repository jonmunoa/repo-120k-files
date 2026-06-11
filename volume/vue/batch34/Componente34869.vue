<template>
  <section class="panel-34869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34869");
const base = ref(34869);
const total = computed(() => base.value * 2);

function incrementar34869() {
  base.value++;
}
</script>
