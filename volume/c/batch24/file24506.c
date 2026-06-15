// fichero 24506 -- macros y constantes -- MODIFICADO
#define LIMITE_24506 24706
#define FACTOR_24506 3

int aplicar_limite24506(int valor) {
    if (valor > LIMITE_24506) return LIMITE_24506;
    return valor * FACTOR_24506;
}
