// fichero 30770 -- macros y constantes
#define LIMITE_30770 30870
#define FACTOR_30770 1

int aplicar_limite30770(int valor) {
    if (valor > LIMITE_30770) return LIMITE_30770;
    return valor * FACTOR_30770;
}
