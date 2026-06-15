// fichero 36365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36365;

Registro36365 crear_registro36365(int id) {
    Registro36365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
