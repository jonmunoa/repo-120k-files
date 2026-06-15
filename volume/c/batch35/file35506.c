// fichero 35506 -- macros y constantes -- MODIFICADO
#define LIMITE_35506 35706
#define FACTOR_35506 3

int aplicar_limite35506(int valor) {
    if (valor > LIMITE_35506) return LIMITE_35506;
    return valor * FACTOR_35506;
}
