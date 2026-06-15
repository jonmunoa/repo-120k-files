// fichero 37814 -- macros y constantes -- MODIFICADO
#define LIMITE_37814 38014
#define FACTOR_37814 6

int aplicar_limite37814(int valor) {
    if (valor > LIMITE_37814) return LIMITE_37814;
    return valor * FACTOR_37814;
}
