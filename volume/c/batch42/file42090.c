// fichero 42090 -- macros y constantes -- MODIFICADO
#define LIMITE_42090 42290
#define FACTOR_42090 2

int aplicar_limite42090(int valor) {
    if (valor > LIMITE_42090) return LIMITE_42090;
    return valor * FACTOR_42090;
}
