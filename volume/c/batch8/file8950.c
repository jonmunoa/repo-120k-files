// fichero 8950 -- macros y constantes -- MODIFICADO
#define LIMITE_8950 9150
#define FACTOR_8950 2

int aplicar_limite8950(int valor) {
    if (valor > LIMITE_8950) return LIMITE_8950;
    return valor * FACTOR_8950;
}
