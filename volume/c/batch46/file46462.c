// fichero 46462 -- macros y constantes -- MODIFICADO
#define LIMITE_46462 46662
#define FACTOR_46462 4

int aplicar_limite46462(int valor) {
    if (valor > LIMITE_46462) return LIMITE_46462;
    return valor * FACTOR_46462;
}
