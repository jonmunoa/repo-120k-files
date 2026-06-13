// fichero 44361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44361;

Registro44361 crear_registro44361(int id) {
    Registro44361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44361(Registro44361 r) {
    return r.valor + r.id;
}
