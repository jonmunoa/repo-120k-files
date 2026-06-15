// fichero 48758 -- macros y constantes -- MODIFICADO
#define LIMITE_48758 48958
#define FACTOR_48758 5

int aplicar_limite48758(int valor) {
    if (valor > LIMITE_48758) return LIMITE_48758;
    return valor * FACTOR_48758;
}
