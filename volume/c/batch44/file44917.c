// fichero 44917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44917;

Registro44917 crear_registro44917(int id) {
    Registro44917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
