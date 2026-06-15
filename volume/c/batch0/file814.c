// fichero 814 -- macros y constantes -- MODIFICADO
#define LIMITE_814 1014
#define FACTOR_814 6

int aplicar_limite814(int valor) {
    if (valor > LIMITE_814) return LIMITE_814;
    return valor * FACTOR_814;
}
