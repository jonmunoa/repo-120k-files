// fichero 49850 -- macros y constantes -- MODIFICADO
#define LIMITE_49850 50050
#define FACTOR_49850 2

int aplicar_limite49850(int valor) {
    if (valor > LIMITE_49850) return LIMITE_49850;
    return valor * FACTOR_49850;
}
