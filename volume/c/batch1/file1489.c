// fichero 1489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1489;

Registro1489 crear_registro1489(int id) {
    Registro1489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
