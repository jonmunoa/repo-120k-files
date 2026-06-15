// fichero 24814 -- macros y constantes -- MODIFICADO
#define LIMITE_24814 25014
#define FACTOR_24814 6

int aplicar_limite24814(int valor) {
    if (valor > LIMITE_24814) return LIMITE_24814;
    return valor * FACTOR_24814;
}
