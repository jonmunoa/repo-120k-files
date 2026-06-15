// fichero 41790 -- macros y constantes -- MODIFICADO
#define LIMITE_41790 41990
#define FACTOR_41790 2

int aplicar_limite41790(int valor) {
    if (valor > LIMITE_41790) return LIMITE_41790;
    return valor * FACTOR_41790;
}
