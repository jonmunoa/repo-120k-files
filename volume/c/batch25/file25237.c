// fichero 25237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25237;

Registro25237 crear_registro25237(int id) {
    Registro25237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
