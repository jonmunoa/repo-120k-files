// fichero 31090 -- macros y constantes -- MODIFICADO
#define LIMITE_31090 31290
#define FACTOR_31090 2

int aplicar_limite31090(int valor) {
    if (valor > LIMITE_31090) return LIMITE_31090;
    return valor * FACTOR_31090;
}
