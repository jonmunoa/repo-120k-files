// fichero 32841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32841;

Registro32841 crear_registro32841(int id) {
    Registro32841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
