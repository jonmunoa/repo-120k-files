// fichero 48090 -- macros y constantes
#define LIMITE_48090 48190
#define FACTOR_48090 1

int aplicar_limite48090(int valor) {
    if (valor > LIMITE_48090) return LIMITE_48090;
    return valor * FACTOR_48090;
}
