// fichero 19206 -- macros y constantes
#define LIMITE_19206 19306
#define FACTOR_19206 2

int aplicar_limite19206(int valor) {
    if (valor > LIMITE_19206) return LIMITE_19206;
    return valor * FACTOR_19206;
}
