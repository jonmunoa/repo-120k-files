// fichero 40594 -- macros y constantes -- MODIFICADO
#define LIMITE_40594 40794
#define FACTOR_40594 6

int aplicar_limite40594(int valor) {
    if (valor > LIMITE_40594) return LIMITE_40594;
    return valor * FACTOR_40594;
}
