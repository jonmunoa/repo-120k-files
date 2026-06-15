// fichero 9458 -- macros y constantes -- MODIFICADO
#define LIMITE_9458 9658
#define FACTOR_9458 5

int aplicar_limite9458(int valor) {
    if (valor > LIMITE_9458) return LIMITE_9458;
    return valor * FACTOR_9458;
}
