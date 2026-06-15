// fichero 47062 -- macros y constantes -- MODIFICADO
#define LIMITE_47062 47262
#define FACTOR_47062 4

int aplicar_limite47062(int valor) {
    if (valor > LIMITE_47062) return LIMITE_47062;
    return valor * FACTOR_47062;
}
