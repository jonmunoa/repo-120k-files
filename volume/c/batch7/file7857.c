// fichero 7857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7857;

Registro7857 crear_registro7857(int id) {
    Registro7857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
