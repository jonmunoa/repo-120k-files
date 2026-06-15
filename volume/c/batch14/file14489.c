// fichero 14489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14489;

Registro14489 crear_registro14489(int id) {
    Registro14489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
