// fichero 29290 -- macros y constantes -- MODIFICADO
#define LIMITE_29290 29490
#define FACTOR_29290 2

int aplicar_limite29290(int valor) {
    if (valor > LIMITE_29290) return LIMITE_29290;
    return valor * FACTOR_29290;
}
