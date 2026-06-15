// fichero 27165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27165;

Registro27165 crear_registro27165(int id) {
    Registro27165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
