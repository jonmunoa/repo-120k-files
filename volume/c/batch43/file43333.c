// fichero 43333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43333;

Registro43333 crear_registro43333(int id) {
    Registro43333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
