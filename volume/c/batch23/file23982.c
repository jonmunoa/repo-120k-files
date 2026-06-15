// fichero 23982 -- macros y constantes -- MODIFICADO
#define LIMITE_23982 24182
#define FACTOR_23982 4

int aplicar_limite23982(int valor) {
    if (valor > LIMITE_23982) return LIMITE_23982;
    return valor * FACTOR_23982;
}
