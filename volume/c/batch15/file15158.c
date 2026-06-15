// fichero 15158 -- macros y constantes -- MODIFICADO
#define LIMITE_15158 15358
#define FACTOR_15158 5

int aplicar_limite15158(int valor) {
    if (valor > LIMITE_15158) return LIMITE_15158;
    return valor * FACTOR_15158;
}
