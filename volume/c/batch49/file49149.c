// fichero 49149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49149;

Registro49149 crear_registro49149(int id) {
    Registro49149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49149(Registro49149 r) {
    return r.valor + r.id;
}
