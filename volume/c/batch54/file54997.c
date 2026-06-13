// fichero 54997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54997;

Registro54997 crear_registro54997(int id) {
    Registro54997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54997(Registro54997 r) {
    return r.valor + r.id;
}
