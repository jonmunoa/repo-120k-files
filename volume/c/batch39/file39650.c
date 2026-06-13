// fichero 39650 -- macros y constantes
#define LIMITE_39650 39750
#define FACTOR_39650 1

int aplicar_limite39650(int valor) {
    if (valor > LIMITE_39650) return LIMITE_39650;
    return valor * FACTOR_39650;
}
