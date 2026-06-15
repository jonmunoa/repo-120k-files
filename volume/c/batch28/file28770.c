// fichero 28770 -- macros y constantes -- MODIFICADO
#define LIMITE_28770 28970
#define FACTOR_28770 2

int aplicar_limite28770(int valor) {
    if (valor > LIMITE_28770) return LIMITE_28770;
    return valor * FACTOR_28770;
}
