// fichero 40506 -- macros y constantes -- MODIFICADO
#define LIMITE_40506 40706
#define FACTOR_40506 3

int aplicar_limite40506(int valor) {
    if (valor > LIMITE_40506) return LIMITE_40506;
    return valor * FACTOR_40506;
}
