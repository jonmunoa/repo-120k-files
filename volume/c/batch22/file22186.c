// fichero 22186 -- macros y constantes -- MODIFICADO
#define LIMITE_22186 22386
#define FACTOR_22186 3

int aplicar_limite22186(int valor) {
    if (valor > LIMITE_22186) return LIMITE_22186;
    return valor * FACTOR_22186;
}
