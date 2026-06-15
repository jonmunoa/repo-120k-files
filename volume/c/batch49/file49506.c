// fichero 49506 -- macros y constantes -- MODIFICADO
#define LIMITE_49506 49706
#define FACTOR_49506 3

int aplicar_limite49506(int valor) {
    if (valor > LIMITE_49506) return LIMITE_49506;
    return valor * FACTOR_49506;
}
