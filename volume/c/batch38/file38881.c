// fichero 38881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38881;

Registro38881 crear_registro38881(int id) {
    Registro38881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
