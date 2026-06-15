// fichero 49330 -- macros y constantes -- MODIFICADO
#define LIMITE_49330 49530
#define FACTOR_49330 2

int aplicar_limite49330(int valor) {
    if (valor > LIMITE_49330) return LIMITE_49330;
    return valor * FACTOR_49330;
}
