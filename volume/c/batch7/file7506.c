// fichero 7506 -- macros y constantes -- MODIFICADO
#define LIMITE_7506 7706
#define FACTOR_7506 3

int aplicar_limite7506(int valor) {
    if (valor > LIMITE_7506) return LIMITE_7506;
    return valor * FACTOR_7506;
}
