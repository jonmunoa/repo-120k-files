// fichero 45505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45505;

Registro45505 crear_registro45505(int id) {
    Registro45505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
