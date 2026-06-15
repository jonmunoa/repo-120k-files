// fichero 28502 -- macros y constantes -- MODIFICADO
#define LIMITE_28502 28702
#define FACTOR_28502 4

int aplicar_limite28502(int valor) {
    if (valor > LIMITE_28502) return LIMITE_28502;
    return valor * FACTOR_28502;
}
