// fichero 38161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38161;

Registro38161 crear_registro38161(int id) {
    Registro38161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
