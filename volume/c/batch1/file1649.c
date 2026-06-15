// fichero 1649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1649;

Registro1649 crear_registro1649(int id) {
    Registro1649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
