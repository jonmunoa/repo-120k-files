// fichero 37090 -- macros y constantes
#define LIMITE_37090 37190
#define FACTOR_37090 1

int aplicar_limite37090(int valor) {
    if (valor > LIMITE_37090) return LIMITE_37090;
    return valor * FACTOR_37090;
}
