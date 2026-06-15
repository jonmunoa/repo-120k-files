// fichero 48250 -- macros y constantes -- MODIFICADO
#define LIMITE_48250 48450
#define FACTOR_48250 2

int aplicar_limite48250(int valor) {
    if (valor > LIMITE_48250) return LIMITE_48250;
    return valor * FACTOR_48250;
}
