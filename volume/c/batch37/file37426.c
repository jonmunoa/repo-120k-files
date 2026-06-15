// fichero 37426 -- macros y constantes -- MODIFICADO
#define LIMITE_37426 37626
#define FACTOR_37426 3

int aplicar_limite37426(int valor) {
    if (valor > LIMITE_37426) return LIMITE_37426;
    return valor * FACTOR_37426;
}
