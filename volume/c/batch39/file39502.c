// fichero 39502 -- macros y constantes -- MODIFICADO
#define LIMITE_39502 39702
#define FACTOR_39502 4

int aplicar_limite39502(int valor) {
    if (valor > LIMITE_39502) return LIMITE_39502;
    return valor * FACTOR_39502;
}
