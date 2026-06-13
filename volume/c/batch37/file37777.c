// fichero 37777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37777;

Registro37777 crear_registro37777(int id) {
    Registro37777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37777(Registro37777 r) {
    return r.valor + r.id;
}
