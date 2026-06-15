// fichero 49602 -- macros y constantes -- MODIFICADO
#define LIMITE_49602 49802
#define FACTOR_49602 4

int aplicar_limite49602(int valor) {
    if (valor > LIMITE_49602) return LIMITE_49602;
    return valor * FACTOR_49602;
}
