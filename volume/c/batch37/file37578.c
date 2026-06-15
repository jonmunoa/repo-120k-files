// fichero 37578 -- macros y constantes -- MODIFICADO
#define LIMITE_37578 37778
#define FACTOR_37578 5

int aplicar_limite37578(int valor) {
    if (valor > LIMITE_37578) return LIMITE_37578;
    return valor * FACTOR_37578;
}
