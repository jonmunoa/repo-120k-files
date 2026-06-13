// fichero 44426 -- macros y constantes
#define LIMITE_44426 44526
#define FACTOR_44426 2

int aplicar_limite44426(int valor) {
    if (valor > LIMITE_44426) return LIMITE_44426;
    return valor * FACTOR_44426;
}
