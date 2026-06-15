// fichero 38913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38913;

Registro38913 crear_registro38913(int id) {
    Registro38913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
