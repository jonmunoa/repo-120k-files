// fichero 38181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38181;

Registro38181 crear_registro38181(int id) {
    Registro38181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
