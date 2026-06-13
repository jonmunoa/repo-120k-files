// fichero 48206 -- macros y constantes
#define LIMITE_48206 48306
#define FACTOR_48206 2

int aplicar_limite48206(int valor) {
    if (valor > LIMITE_48206) return LIMITE_48206;
    return valor * FACTOR_48206;
}
