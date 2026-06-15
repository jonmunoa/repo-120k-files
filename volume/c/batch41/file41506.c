// fichero 41506 -- macros y constantes -- MODIFICADO
#define LIMITE_41506 41706
#define FACTOR_41506 3

int aplicar_limite41506(int valor) {
    if (valor > LIMITE_41506) return LIMITE_41506;
    return valor * FACTOR_41506;
}
