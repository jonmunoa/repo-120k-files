// fichero 29790 -- macros y constantes -- MODIFICADO
#define LIMITE_29790 29990
#define FACTOR_29790 2

int aplicar_limite29790(int valor) {
    if (valor > LIMITE_29790) return LIMITE_29790;
    return valor * FACTOR_29790;
}
