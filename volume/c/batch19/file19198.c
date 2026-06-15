// fichero 19198 -- macros y constantes -- MODIFICADO
#define LIMITE_19198 19398
#define FACTOR_19198 5

int aplicar_limite19198(int valor) {
    if (valor > LIMITE_19198) return LIMITE_19198;
    return valor * FACTOR_19198;
}
