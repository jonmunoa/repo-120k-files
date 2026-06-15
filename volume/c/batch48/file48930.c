// fichero 48930 -- macros y constantes -- MODIFICADO
#define LIMITE_48930 49130
#define FACTOR_48930 2

int aplicar_limite48930(int valor) {
    if (valor > LIMITE_48930) return LIMITE_48930;
    return valor * FACTOR_48930;
}
