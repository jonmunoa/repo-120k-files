// fichero 30770 -- macros y constantes -- MODIFICADO
#define LIMITE_30770 30970
#define FACTOR_30770 2

int aplicar_limite30770(int valor) {
    if (valor > LIMITE_30770) return LIMITE_30770;
    return valor * FACTOR_30770;
}
