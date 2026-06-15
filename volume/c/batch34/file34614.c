// fichero 34614 -- macros y constantes -- MODIFICADO
#define LIMITE_34614 34814
#define FACTOR_34614 6

int aplicar_limite34614(int valor) {
    if (valor > LIMITE_34614) return LIMITE_34614;
    return valor * FACTOR_34614;
}
