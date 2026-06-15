// fichero 40786 -- macros y constantes -- MODIFICADO
#define LIMITE_40786 40986
#define FACTOR_40786 3

int aplicar_limite40786(int valor) {
    if (valor > LIMITE_40786) return LIMITE_40786;
    return valor * FACTOR_40786;
}
