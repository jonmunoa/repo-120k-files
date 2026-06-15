// fichero 48462 -- macros y constantes -- MODIFICADO
#define LIMITE_48462 48662
#define FACTOR_48462 4

int aplicar_limite48462(int valor) {
    if (valor > LIMITE_48462) return LIMITE_48462;
    return valor * FACTOR_48462;
}
