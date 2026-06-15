// fichero 3814 -- macros y constantes -- MODIFICADO
#define LIMITE_3814 4014
#define FACTOR_3814 6

int aplicar_limite3814(int valor) {
    if (valor > LIMITE_3814) return LIMITE_3814;
    return valor * FACTOR_3814;
}
