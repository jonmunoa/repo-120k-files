// fichero 30150 -- macros y constantes -- MODIFICADO
#define LIMITE_30150 30350
#define FACTOR_30150 2

int aplicar_limite30150(int valor) {
    if (valor > LIMITE_30150) return LIMITE_30150;
    return valor * FACTOR_30150;
}
