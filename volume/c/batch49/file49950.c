// fichero 49950 -- macros y constantes -- MODIFICADO
#define LIMITE_49950 50150
#define FACTOR_49950 2

int aplicar_limite49950(int valor) {
    if (valor > LIMITE_49950) return LIMITE_49950;
    return valor * FACTOR_49950;
}
