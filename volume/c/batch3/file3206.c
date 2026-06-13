// fichero 3206 -- macros y constantes
#define LIMITE_3206 3306
#define FACTOR_3206 2

int aplicar_limite3206(int valor) {
    if (valor > LIMITE_3206) return LIMITE_3206;
    return valor * FACTOR_3206;
}
