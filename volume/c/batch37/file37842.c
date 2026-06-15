// fichero 37842 -- macros y constantes -- MODIFICADO
#define LIMITE_37842 38042
#define FACTOR_37842 4

int aplicar_limite37842(int valor) {
    if (valor > LIMITE_37842) return LIMITE_37842;
    return valor * FACTOR_37842;
}
