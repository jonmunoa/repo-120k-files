// fichero 37254 -- macros y constantes
#define LIMITE_37254 37354
#define FACTOR_37254 5

int aplicar_limite37254(int valor) {
    if (valor > LIMITE_37254) return LIMITE_37254;
    return valor * FACTOR_37254;
}
