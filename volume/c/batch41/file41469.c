// fichero 41469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41469;

Registro41469 crear_registro41469(int id) {
    Registro41469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
