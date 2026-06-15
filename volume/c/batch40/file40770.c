// fichero 40770 -- macros y constantes -- MODIFICADO
#define LIMITE_40770 40970
#define FACTOR_40770 2

int aplicar_limite40770(int valor) {
    if (valor > LIMITE_40770) return LIMITE_40770;
    return valor * FACTOR_40770;
}
