// fichero 49386 -- macros y constantes
#define LIMITE_49386 49486
#define FACTOR_49386 2

int aplicar_limite49386(int valor) {
    if (valor > LIMITE_49386) return LIMITE_49386;
    return valor * FACTOR_49386;
}
