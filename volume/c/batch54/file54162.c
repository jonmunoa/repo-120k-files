// fichero 54162 -- macros y constantes
#define LIMITE_54162 54262
#define FACTOR_54162 3

int aplicar_limite54162(int valor) {
    if (valor > LIMITE_54162) return LIMITE_54162;
    return valor * FACTOR_54162;
}
