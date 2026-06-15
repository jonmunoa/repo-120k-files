// fichero 10814 -- macros y constantes -- MODIFICADO
#define LIMITE_10814 11014
#define FACTOR_10814 6

int aplicar_limite10814(int valor) {
    if (valor > LIMITE_10814) return LIMITE_10814;
    return valor * FACTOR_10814;
}
