// fichero 6333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6333;

Registro6333 crear_registro6333(int id) {
    Registro6333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6333(Registro6333 r) {
    return r.valor + r.id;
}
