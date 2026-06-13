// fichero 44330 -- macros y constantes
#define LIMITE_44330 44430
#define FACTOR_44330 1

int aplicar_limite44330(int valor) {
    if (valor > LIMITE_44330) return LIMITE_44330;
    return valor * FACTOR_44330;
}
