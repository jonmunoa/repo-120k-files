// fichero 44506 -- macros y constantes -- MODIFICADO
#define LIMITE_44506 44706
#define FACTOR_44506 3

int aplicar_limite44506(int valor) {
    if (valor > LIMITE_44506) return LIMITE_44506;
    return valor * FACTOR_44506;
}
