// fichero 46562 -- macros y constantes -- MODIFICADO
#define LIMITE_46562 46762
#define FACTOR_46562 4

int aplicar_limite46562(int valor) {
    if (valor > LIMITE_46562) return LIMITE_46562;
    return valor * FACTOR_46562;
}
