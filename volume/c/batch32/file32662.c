// fichero 32662 -- macros y constantes -- MODIFICADO
#define LIMITE_32662 32862
#define FACTOR_32662 4

int aplicar_limite32662(int valor) {
    if (valor > LIMITE_32662) return LIMITE_32662;
    return valor * FACTOR_32662;
}
