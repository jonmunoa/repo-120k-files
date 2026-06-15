// fichero 11242 -- macros y constantes -- MODIFICADO
#define LIMITE_11242 11442
#define FACTOR_11242 4

int aplicar_limite11242(int valor) {
    if (valor > LIMITE_11242) return LIMITE_11242;
    return valor * FACTOR_11242;
}
