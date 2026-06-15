// fichero 21626 -- macros y constantes -- MODIFICADO
#define LIMITE_21626 21826
#define FACTOR_21626 3

int aplicar_limite21626(int valor) {
    if (valor > LIMITE_21626) return LIMITE_21626;
    return valor * FACTOR_21626;
}
