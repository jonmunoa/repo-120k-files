// fichero 40590 -- macros y constantes -- MODIFICADO
#define LIMITE_40590 40790
#define FACTOR_40590 2

int aplicar_limite40590(int valor) {
    if (valor > LIMITE_40590) return LIMITE_40590;
    return valor * FACTOR_40590;
}
