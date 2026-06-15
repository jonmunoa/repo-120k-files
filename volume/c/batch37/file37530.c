// fichero 37530 -- macros y constantes -- MODIFICADO
#define LIMITE_37530 37730
#define FACTOR_37530 2

int aplicar_limite37530(int valor) {
    if (valor > LIMITE_37530) return LIMITE_37530;
    return valor * FACTOR_37530;
}
