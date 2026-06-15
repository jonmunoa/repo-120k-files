// fichero 3414 -- macros y constantes -- MODIFICADO
#define LIMITE_3414 3614
#define FACTOR_3414 6

int aplicar_limite3414(int valor) {
    if (valor > LIMITE_3414) return LIMITE_3414;
    return valor * FACTOR_3414;
}
