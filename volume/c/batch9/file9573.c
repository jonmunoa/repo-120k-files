// fichero 9573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9573;

Registro9573 crear_registro9573(int id) {
    Registro9573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9573(Registro9573 r) {
    return r.valor + r.id;
}
