// fichero 47186 -- macros y constantes -- MODIFICADO
#define LIMITE_47186 47386
#define FACTOR_47186 3

int aplicar_limite47186(int valor) {
    if (valor > LIMITE_47186) return LIMITE_47186;
    return valor * FACTOR_47186;
}
