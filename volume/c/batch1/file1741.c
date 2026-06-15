// fichero 1741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1741;

Registro1741 crear_registro1741(int id) {
    Registro1741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
