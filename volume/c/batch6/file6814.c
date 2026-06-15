// fichero 6814 -- macros y constantes -- MODIFICADO
#define LIMITE_6814 7014
#define FACTOR_6814 6

int aplicar_limite6814(int valor) {
    if (valor > LIMITE_6814) return LIMITE_6814;
    return valor * FACTOR_6814;
}
