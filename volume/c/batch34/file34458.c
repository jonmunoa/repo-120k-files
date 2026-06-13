// fichero 34458 -- macros y constantes
#define LIMITE_34458 34558
#define FACTOR_34458 4

int aplicar_limite34458(int valor) {
    if (valor > LIMITE_34458) return LIMITE_34458;
    return valor * FACTOR_34458;
}
