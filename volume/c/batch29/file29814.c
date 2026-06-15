// fichero 29814 -- macros y constantes -- MODIFICADO
#define LIMITE_29814 30014
#define FACTOR_29814 6

int aplicar_limite29814(int valor) {
    if (valor > LIMITE_29814) return LIMITE_29814;
    return valor * FACTOR_29814;
}
