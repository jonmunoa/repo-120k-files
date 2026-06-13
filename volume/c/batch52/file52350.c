// fichero 52350 -- macros y constantes
#define LIMITE_52350 52450
#define FACTOR_52350 1

int aplicar_limite52350(int valor) {
    if (valor > LIMITE_52350) return LIMITE_52350;
    return valor * FACTOR_52350;
}
