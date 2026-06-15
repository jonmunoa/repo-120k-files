// fichero 49842 -- macros y constantes -- MODIFICADO
#define LIMITE_49842 50042
#define FACTOR_49842 4

int aplicar_limite49842(int valor) {
    if (valor > LIMITE_49842) return LIMITE_49842;
    return valor * FACTOR_49842;
}
