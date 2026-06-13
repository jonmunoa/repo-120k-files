// fichero 33206 -- macros y constantes
#define LIMITE_33206 33306
#define FACTOR_33206 2

int aplicar_limite33206(int valor) {
    if (valor > LIMITE_33206) return LIMITE_33206;
    return valor * FACTOR_33206;
}
