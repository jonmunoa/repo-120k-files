// fichero 40814 -- macros y constantes -- MODIFICADO
#define LIMITE_40814 41014
#define FACTOR_40814 6

int aplicar_limite40814(int valor) {
    if (valor > LIMITE_40814) return LIMITE_40814;
    return valor * FACTOR_40814;
}
