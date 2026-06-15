// fichero 29202 -- macros y constantes -- MODIFICADO
#define LIMITE_29202 29402
#define FACTOR_29202 4

int aplicar_limite29202(int valor) {
    if (valor > LIMITE_29202) return LIMITE_29202;
    return valor * FACTOR_29202;
}
