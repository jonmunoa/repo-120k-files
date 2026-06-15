// fichero 44378 -- macros y constantes -- MODIFICADO
#define LIMITE_44378 44578
#define FACTOR_44378 5

int aplicar_limite44378(int valor) {
    if (valor > LIMITE_44378) return LIMITE_44378;
    return valor * FACTOR_44378;
}
