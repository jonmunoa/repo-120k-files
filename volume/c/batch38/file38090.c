// fichero 38090 -- macros y constantes -- MODIFICADO
#define LIMITE_38090 38290
#define FACTOR_38090 2

int aplicar_limite38090(int valor) {
    if (valor > LIMITE_38090) return LIMITE_38090;
    return valor * FACTOR_38090;
}
