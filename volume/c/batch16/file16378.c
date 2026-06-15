// fichero 16378 -- macros y constantes -- MODIFICADO
#define LIMITE_16378 16578
#define FACTOR_16378 5

int aplicar_limite16378(int valor) {
    if (valor > LIMITE_16378) return LIMITE_16378;
    return valor * FACTOR_16378;
}
