// fichero 34206 -- macros y constantes
#define LIMITE_34206 34306
#define FACTOR_34206 2

int aplicar_limite34206(int valor) {
    if (valor > LIMITE_34206) return LIMITE_34206;
    return valor * FACTOR_34206;
}
