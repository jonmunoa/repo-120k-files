// fichero 15662 -- macros y constantes -- MODIFICADO
#define LIMITE_15662 15862
#define FACTOR_15662 4

int aplicar_limite15662(int valor) {
    if (valor > LIMITE_15662) return LIMITE_15662;
    return valor * FACTOR_15662;
}
