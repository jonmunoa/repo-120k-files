<template>
  <section class="panel-26421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26421");
const base = ref(26421);
const total = computed(() => base.value * 2);

function incrementar26421() {
  base.value++;
}
</script>
