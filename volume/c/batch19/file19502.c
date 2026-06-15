// fichero 19502 -- macros y constantes -- MODIFICADO
#define LIMITE_19502 19702
#define FACTOR_19502 4

int aplicar_limite19502(int valor) {
    if (valor > LIMITE_19502) return LIMITE_19502;
    return valor * FACTOR_19502;
}
