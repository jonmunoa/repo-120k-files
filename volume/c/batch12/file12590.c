// fichero 12590 -- macros y constantes -- MODIFICADO
#define LIMITE_12590 12790
#define FACTOR_12590 2

int aplicar_limite12590(int valor) {
    if (valor > LIMITE_12590) return LIMITE_12590;
    return valor * FACTOR_12590;
}
