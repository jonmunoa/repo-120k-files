// fichero 48814 -- macros y constantes -- MODIFICADO
#define LIMITE_48814 49014
#define FACTOR_48814 6

int aplicar_limite48814(int valor) {
    if (valor > LIMITE_48814) return LIMITE_48814;
    return valor * FACTOR_48814;
}
