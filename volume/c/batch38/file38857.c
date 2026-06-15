// fichero 38857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38857;

Registro38857 crear_registro38857(int id) {
    Registro38857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
