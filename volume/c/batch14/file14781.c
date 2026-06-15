// fichero 14781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14781;

Registro14781 crear_registro14781(int id) {
    Registro14781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
