// fichero 29210 -- macros y constantes -- MODIFICADO
#define LIMITE_29210 29410
#define FACTOR_29210 2

int aplicar_limite29210(int valor) {
    if (valor > LIMITE_29210) return LIMITE_29210;
    return valor * FACTOR_29210;
}
