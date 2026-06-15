// fichero 3526 -- macros y constantes -- MODIFICADO
#define LIMITE_3526 3726
#define FACTOR_3526 3

int aplicar_limite3526(int valor) {
    if (valor > LIMITE_3526) return LIMITE_3526;
    return valor * FACTOR_3526;
}
