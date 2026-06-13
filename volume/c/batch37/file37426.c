// fichero 37426 -- macros y constantes
#define LIMITE_37426 37526
#define FACTOR_37426 2

int aplicar_limite37426(int valor) {
    if (valor > LIMITE_37426) return LIMITE_37426;
    return valor * FACTOR_37426;
}
