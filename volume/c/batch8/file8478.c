// fichero 8478 -- macros y constantes -- MODIFICADO
#define LIMITE_8478 8678
#define FACTOR_8478 5

int aplicar_limite8478(int valor) {
    if (valor > LIMITE_8478) return LIMITE_8478;
    return valor * FACTOR_8478;
}
