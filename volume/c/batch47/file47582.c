// fichero 47582 -- macros y constantes -- MODIFICADO
#define LIMITE_47582 47782
#define FACTOR_47582 4

int aplicar_limite47582(int valor) {
    if (valor > LIMITE_47582) return LIMITE_47582;
    return valor * FACTOR_47582;
}
