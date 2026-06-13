// fichero 5558 -- macros y constantes
#define LIMITE_5558 5658
#define FACTOR_5558 4

int aplicar_limite5558(int valor) {
    if (valor > LIMITE_5558) return LIMITE_5558;
    return valor * FACTOR_5558;
}
