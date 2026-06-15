// fichero 41366 -- macros y constantes -- MODIFICADO
#define LIMITE_41366 41566
#define FACTOR_41366 3

int aplicar_limite41366(int valor) {
    if (valor > LIMITE_41366) return LIMITE_41366;
    return valor * FACTOR_41366;
}
