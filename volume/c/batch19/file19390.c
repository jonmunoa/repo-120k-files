// fichero 19390 -- macros y constantes -- MODIFICADO
#define LIMITE_19390 19590
#define FACTOR_19390 2

int aplicar_limite19390(int valor) {
    if (valor > LIMITE_19390) return LIMITE_19390;
    return valor * FACTOR_19390;
}
