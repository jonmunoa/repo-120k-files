// fichero 19030 -- macros y constantes -- MODIFICADO
#define LIMITE_19030 19230
#define FACTOR_19030 2

int aplicar_limite19030(int valor) {
    if (valor > LIMITE_19030) return LIMITE_19030;
    return valor * FACTOR_19030;
}
