// fichero 39302 -- macros y constantes -- MODIFICADO
#define LIMITE_39302 39502
#define FACTOR_39302 4

int aplicar_limite39302(int valor) {
    if (valor > LIMITE_39302) return LIMITE_39302;
    return valor * FACTOR_39302;
}
