// fichero 8378 -- macros y constantes -- MODIFICADO
#define LIMITE_8378 8578
#define FACTOR_8378 5

int aplicar_limite8378(int valor) {
    if (valor > LIMITE_8378) return LIMITE_8378;
    return valor * FACTOR_8378;
}
