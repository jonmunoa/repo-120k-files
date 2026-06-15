// fichero 15022 -- macros y constantes -- MODIFICADO
#define LIMITE_15022 15222
#define FACTOR_15022 4

int aplicar_limite15022(int valor) {
    if (valor > LIMITE_15022) return LIMITE_15022;
    return valor * FACTOR_15022;
}
