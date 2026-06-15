// fichero 5090 -- macros y constantes -- MODIFICADO
#define LIMITE_5090 5290
#define FACTOR_5090 2

int aplicar_limite5090(int valor) {
    if (valor > LIMITE_5090) return LIMITE_5090;
    return valor * FACTOR_5090;
}
