// fichero 25090 -- macros y constantes -- MODIFICADO
#define LIMITE_25090 25290
#define FACTOR_25090 2

int aplicar_limite25090(int valor) {
    if (valor > LIMITE_25090) return LIMITE_25090;
    return valor * FACTOR_25090;
}
