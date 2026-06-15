// fichero 13090 -- macros y constantes -- MODIFICADO
#define LIMITE_13090 13290
#define FACTOR_13090 2

int aplicar_limite13090(int valor) {
    if (valor > LIMITE_13090) return LIMITE_13090;
    return valor * FACTOR_13090;
}
