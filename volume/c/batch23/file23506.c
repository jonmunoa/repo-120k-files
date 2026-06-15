// fichero 23506 -- macros y constantes -- MODIFICADO
#define LIMITE_23506 23706
#define FACTOR_23506 3

int aplicar_limite23506(int valor) {
    if (valor > LIMITE_23506) return LIMITE_23506;
    return valor * FACTOR_23506;
}
