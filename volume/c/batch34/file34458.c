// fichero 34458 -- macros y constantes -- MODIFICADO
#define LIMITE_34458 34658
#define FACTOR_34458 5

int aplicar_limite34458(int valor) {
    if (valor > LIMITE_34458) return LIMITE_34458;
    return valor * FACTOR_34458;
}
