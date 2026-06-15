// fichero 48506 -- macros y constantes -- MODIFICADO
#define LIMITE_48506 48706
#define FACTOR_48506 3

int aplicar_limite48506(int valor) {
    if (valor > LIMITE_48506) return LIMITE_48506;
    return valor * FACTOR_48506;
}
