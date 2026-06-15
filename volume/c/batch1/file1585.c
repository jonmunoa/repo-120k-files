// fichero 1585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1585;

Registro1585 crear_registro1585(int id) {
    Registro1585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
