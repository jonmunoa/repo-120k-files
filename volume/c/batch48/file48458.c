// fichero 48458 -- macros y constantes -- MODIFICADO
#define LIMITE_48458 48658
#define FACTOR_48458 5

int aplicar_limite48458(int valor) {
    if (valor > LIMITE_48458) return LIMITE_48458;
    return valor * FACTOR_48458;
}
