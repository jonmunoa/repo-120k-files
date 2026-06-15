// fichero 15506 -- macros y constantes -- MODIFICADO
#define LIMITE_15506 15706
#define FACTOR_15506 3

int aplicar_limite15506(int valor) {
    if (valor > LIMITE_15506) return LIMITE_15506;
    return valor * FACTOR_15506;
}
