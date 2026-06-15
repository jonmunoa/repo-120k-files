// fichero 21961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21961;

Registro21961 crear_registro21961(int id) {
    Registro21961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
