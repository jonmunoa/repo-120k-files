// fichero 20777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20777;

Registro20777 crear_registro20777(int id) {
    Registro20777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20777(Registro20777 r) {
    return r.valor + r.id;
}
