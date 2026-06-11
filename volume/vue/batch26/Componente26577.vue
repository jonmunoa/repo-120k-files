<template>
  <section class="panel-26577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26577");
const base = ref(26577);
const total = computed(() => base.value * 2);

function incrementar26577() {
  base.value++;
}
</script>
