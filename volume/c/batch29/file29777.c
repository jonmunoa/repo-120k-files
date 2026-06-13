// fichero 29777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29777;

Registro29777 crear_registro29777(int id) {
    Registro29777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29777(Registro29777 r) {
    return r.valor + r.id;
}
