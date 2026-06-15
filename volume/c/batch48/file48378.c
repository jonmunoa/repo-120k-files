// fichero 48378 -- macros y constantes -- MODIFICADO
#define LIMITE_48378 48578
#define FACTOR_48378 5

int aplicar_limite48378(int valor) {
    if (valor > LIMITE_48378) return LIMITE_48378;
    return valor * FACTOR_48378;
}
