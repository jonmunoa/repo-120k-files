// fichero 29382 -- macros y constantes -- MODIFICADO
#define LIMITE_29382 29582
#define FACTOR_29382 4

int aplicar_limite29382(int valor) {
    if (valor > LIMITE_29382) return LIMITE_29382;
    return valor * FACTOR_29382;
}
