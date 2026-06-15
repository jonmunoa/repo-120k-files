// fichero 36090 -- macros y constantes -- MODIFICADO
#define LIMITE_36090 36290
#define FACTOR_36090 2

int aplicar_limite36090(int valor) {
    if (valor > LIMITE_36090) return LIMITE_36090;
    return valor * FACTOR_36090;
}
