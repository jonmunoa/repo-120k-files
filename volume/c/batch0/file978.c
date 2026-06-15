// fichero 978 -- macros y constantes -- MODIFICADO
#define LIMITE_978 1178
#define FACTOR_978 5

int aplicar_limite978(int valor) {
    if (valor > LIMITE_978) return LIMITE_978;
    return valor * FACTOR_978;
}
