// fichero 49386 -- macros y constantes -- MODIFICADO
#define LIMITE_49386 49586
#define FACTOR_49386 3

int aplicar_limite49386(int valor) {
    if (valor > LIMITE_49386) return LIMITE_49386;
    return valor * FACTOR_49386;
}
