// fichero 21814 -- macros y constantes -- MODIFICADO
#define LIMITE_21814 22014
#define FACTOR_21814 6

int aplicar_limite21814(int valor) {
    if (valor > LIMITE_21814) return LIMITE_21814;
    return valor * FACTOR_21814;
}
