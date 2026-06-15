// fichero 33506 -- macros y constantes -- MODIFICADO
#define LIMITE_33506 33706
#define FACTOR_33506 3

int aplicar_limite33506(int valor) {
    if (valor > LIMITE_33506) return LIMITE_33506;
    return valor * FACTOR_33506;
}
