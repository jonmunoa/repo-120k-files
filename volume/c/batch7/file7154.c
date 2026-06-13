// fichero 7154 -- macros y constantes
#define LIMITE_7154 7254
#define FACTOR_7154 5

int aplicar_limite7154(int valor) {
    if (valor > LIMITE_7154) return LIMITE_7154;
    return valor * FACTOR_7154;
}
