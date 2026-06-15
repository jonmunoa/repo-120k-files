// fichero 19506 -- macros y constantes -- MODIFICADO
#define LIMITE_19506 19706
#define FACTOR_19506 3

int aplicar_limite19506(int valor) {
    if (valor > LIMITE_19506) return LIMITE_19506;
    return valor * FACTOR_19506;
}
