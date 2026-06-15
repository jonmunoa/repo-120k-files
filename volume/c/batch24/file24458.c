// fichero 24458 -- macros y constantes -- MODIFICADO
#define LIMITE_24458 24658
#define FACTOR_24458 5

int aplicar_limite24458(int valor) {
    if (valor > LIMITE_24458) return LIMITE_24458;
    return valor * FACTOR_24458;
}
