// fichero 34506 -- macros y constantes -- MODIFICADO
#define LIMITE_34506 34706
#define FACTOR_34506 3

int aplicar_limite34506(int valor) {
    if (valor > LIMITE_34506) return LIMITE_34506;
    return valor * FACTOR_34506;
}
