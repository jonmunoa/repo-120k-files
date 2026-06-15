// fichero 7478 -- macros y constantes -- MODIFICADO
#define LIMITE_7478 7678
#define FACTOR_7478 5

int aplicar_limite7478(int valor) {
    if (valor > LIMITE_7478) return LIMITE_7478;
    return valor * FACTOR_7478;
}
